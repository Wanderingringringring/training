import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState, Imu
from geometry_msgs.msg import Twist
from rm_msgs.msg import WheelLegCmd
import math
import numpy as np


from wheel_leg_controller.vmc_cal import five_links_param
from wheel_leg_controller.lqr_update import lqr_controller
from wheel_leg_controller.roll_leg_control import RollLegController


class PIDController:
    def __init__(self, kp, ki, kd, max_out, max_i, feedforward=0.0):
        self.kp = kp; self.ki = ki; self.kd = kd
        self.max_out = max_out; self.max_i = max_i; self.feedforward = feedforward
        self.integral = 0.0; self.prev_error = 0.0

    def compute(self, current, target):
        error = target - current
        self.integral += error
        self.integral = np.clip(self.integral, -self.max_i, self.max_i)
        derivative = (error - self.prev_error)
        self.prev_error = error
        output = self.kp * error + self.ki * self.integral + self.kd * derivative + self.feedforward
        return np.clip(output, -self.max_out, self.max_out)

class WheelLegNode(Node):
    def __init__(self):
        super().__init__('wheel_leg_controller')

        self.cmd_pub = self.create_publisher(WheelLegCmd, '/actuator_cmd', 10)
        self.create_subscription(JointState, '/joint_states', self.joint_states_cb, 10)
        self.create_subscription(Imu, '/imu', self.imu_cb, 10)
        self.create_subscription(Twist, '/cmd_vel', self.cmd_vel_cb, 10)

        self.dt = 0.002
        self.wheel_radius = 0.06
        self.target_v = 0.0
        self.target_w = 0.0

        self.vmc_l = five_links_param(dt=self.dt)
        self.vmc_r = five_links_param(dt=self.dt)
        self.lqr_l = lqr_controller(dt=self.dt)
        self.lqr_r = lqr_controller(dt=self.dt)
        self.roll_balancer = RollLegController(kp=1.0, kd=0.0)

        self.L0_pid_l = PIDController(700.0, 0.0, 5.0, 150.0, 0.0)
        self.L0_pid_r = PIDController(700.0, 0.0, 5.0, 150.0, 0.0)

        self.pitch = 0.0
        self.gyro_pitch = 0.0
        self.roll = 0.0
        self.target_length = 0.12

        self.last_time = self.get_clock().now()
        self.get_logger().info("原版复刻代码已启动！")

    def cmd_vel_cb(self, msg):
        self.target_v = msg.linear.x
        self.target_w = msg.angular.z

    def imu_cb(self, msg):
        q = msg.orientation
        sinp = 2.0 * (q.w * q.y - q.z * q.x)
        if abs(sinp) >= 1: pitch_raw = math.copysign(math.pi / 2, sinp)
        else: pitch_raw = math.asin(sinp)

        sinr_cosp = 2 * (q.w * q.x + q.y * q.z)
        cosr_cosp = 1 - 2 * (q.x * q.x + q.y * q.y)
        roll_raw = math.atan2(sinr_cosp, cosr_cosp)

        # 🚨【符号注意】老师原版对 IMU 姿态做了取反，这极其关键！
        self.pitch = -pitch_raw
        self.roll = -roll_raw
        self.gyro_pitch = -msg.angular_velocity.y

    def joint_states_cb(self, msg):
        if len(msg.position) < 6: return
        now = self.get_clock().now()
        dt = (now - self.last_time).nanoseconds / 1e9
        self.last_time = now
        if dt <= 0.0 or dt > 0.1: dt = self.dt

        motor1_angle_l, motor2_angle_l = msg.position[2], msg.position[3]
        motor1_angle_r, motor2_angle_r = msg.position[0], msg.position[1]
        motor_speed_left, motor_speed_right = msg.velocity[5], msg.velocity[4]
        motor_pos_left, motor_pos_right = msg.position[5], msg.position[4]

        target_length_left, target_length_right = self.roll_balancer.compute_leg_lengths(
            current_roll=self.roll, target_roll=0.0, base_length=self.target_length
        )

        # 🚨【符号注意】共模计算，老师原版是 左减右
        common_motor_speed = (motor_speed_left - motor_speed_right) / 2.0
        common_motor_pos = (motor_pos_left - motor_pos_right) / 2.0

        # 防溜车逻辑（原版逻辑）
        current_v = self.target_v
        self.lqr_l.x_b_set = common_motor_pos * self.wheel_radius
        self.lqr_r.x_b_set = -(common_motor_pos * self.wheel_radius) # 🚨【符号注意】右腿目标位移取反
        self.lqr_l.v_set = current_v
        self.lqr_r.v_set = current_v

        # =====================================================================
        # 【左腿控制】
        # =====================================================================
        self.vmc_l.forward_kinematics_cal(1, motor1_angle_l, motor2_angle_l, self.pitch, self.gyro_pitch)

        # 🚨【符号注意】左腿 LQR 更新，共模输入是正的
        self.lqr_l.states_update(1, self.vmc_l, self.pitch, self.gyro_pitch, common_motor_pos, common_motor_speed, self.wheel_radius)
        self.lqr_l.calc_k_matrix_from_poly(self.vmc_l.L_0)

        F_0_ctrl_l = self.L0_pid_l.compute(self.vmc_l.L_0, target_length_left)
        F_0_l = (4 / math.cos(self.vmc_l.theta) if math.cos(self.vmc_l.theta) != 0 else 0) + F_0_ctrl_l
        F_0_l = np.clip(F_0_l, -100.0, 100.0)

        T_p_l = (self.lqr_l.K[1] * (self.lqr_l.theta - 0.0) + self.lqr_l.K[3] * (self.lqr_l.d_theta - 0.0) +
                 self.lqr_l.K[5] * (self.lqr_l.x_b - self.lqr_l.x_b_set) + self.lqr_l.K[7] * (self.lqr_l.v_b_whole - self.target_v) +
                 self.lqr_l.K[9] * (self.lqr_l.phi - 0.0) + self.lqr_l.K[11] * (self.lqr_l.d_phi - 0.0))

        wheel_T_l = (self.lqr_l.K[0] * (self.lqr_l.theta - 0.0) + self.lqr_l.K[2] * (self.lqr_l.d_theta - 0.0) +
                     self.lqr_l.K[4] * (self.lqr_l.x_b - self.lqr_l.x_b_set) + self.lqr_l.K[6] * (self.lqr_l.v_b_whole - self.target_v) +
                     self.lqr_l.K[8] * (self.lqr_l.phi - 0.0) + self.lqr_l.K[10] * (self.lqr_l.d_phi - 0.0))

        torque_set_left_0, torque_set_left_1 = self.vmc_l.VMC_torque_cal(F_0_l, T_p_l)

        # =====================================================================
        # 【右腿控制】
        # =====================================================================
        self.vmc_r.forward_kinematics_cal(0, motor1_angle_r, motor2_angle_r, self.pitch, self.gyro_pitch)

        # 🚨【符号注意】右腿 LQR 更新，老师原版共模输入必须取反！！！
        self.lqr_r.states_update(0, self.vmc_r, self.pitch, self.gyro_pitch, -common_motor_pos, -common_motor_speed, self.wheel_radius)
        self.lqr_r.calc_k_matrix_from_poly(self.vmc_r.L_0)

        F_0_ctrl_r = self.L0_pid_r.compute(self.vmc_r.L_0, target_length_right)
        F_0_r = (4 / math.cos(self.vmc_r.theta) if math.cos(self.vmc_r.theta) != 0 else 0) + F_0_ctrl_r
        F_0_r = np.clip(F_0_r, -100.0, 100.0)

        T_p_r = (self.lqr_r.K[1] * (self.lqr_r.theta - 0.0) + self.lqr_r.K[3] * (self.lqr_r.d_theta - 0.0) +
                 self.lqr_r.K[5] * (self.lqr_r.x_b - self.lqr_r.x_b_set) + self.lqr_r.K[7] * (self.lqr_r.v_b_whole - self.target_v) +
                 self.lqr_r.K[9] * (self.lqr_r.phi - 0.0) + self.lqr_r.K[11] * (self.lqr_r.d_phi - 0.0))

        wheel_T_r = (self.lqr_r.K[0] * (self.lqr_r.theta - 0.0) + self.lqr_r.K[2] * (self.lqr_r.d_theta - 0.0) +
                     self.lqr_r.K[4] * (self.lqr_r.x_b - self.lqr_r.x_b_set) + self.lqr_r.K[6] * (self.lqr_r.v_b_whole - self.target_v) +
                     self.lqr_r.K[8] * (self.lqr_r.phi - 0.0) + self.lqr_r.K[10] * (self.lqr_r.d_phi - 0.0))

        torque_set_right_0, torque_set_right_1 = self.vmc_r.VMC_torque_cal(F_0_r, T_p_r)

        # =====================================================================
        # 【下发执行器指令】
        # =====================================================================
        cmd = WheelLegCmd()

        # 🚨【符号注意】老师原版：左腿 VMC 力矩加了负号，右腿没加！
        cmd.right_phi1 = max(-6.0, min(6.0, torque_set_right_0))
        cmd.right_phi4 = max(-6.0, min(6.0, torque_set_right_1))
        cmd.left_phi1  = max(-6.0, min(6.0, -torque_set_left_0))   # 左腿加了负号！
        cmd.left_phi4  = max(-6.0, min(6.0, -torque_set_left_1))   # 左腿加了负号！

        # 🚨【符号注意】轮子力矩：左轮加了负号，右轮没加！
        cmd.right_wheel = max(-2.0, min(2.0, wheel_T_r))
        cmd.left_wheel  = max(-2.0, min(2.0, -wheel_T_l))          # 左轮加了负号！

        self.cmd_pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = WheelLegNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

