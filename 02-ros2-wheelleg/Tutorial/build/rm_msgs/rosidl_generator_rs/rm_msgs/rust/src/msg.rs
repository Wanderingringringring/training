#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rm_msgs__msg__GimbalTarget
/// 云台目标角度

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GimbalTarget {
    /// 目标 yaw 角 (rad)
    pub yaw: f64,

    /// 目标 pitch 角 (rad)
    pub pitch: f64,

}



impl Default for GimbalTarget {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GimbalTarget::default())
  }
}

impl rosidl_runtime_rs::Message for GimbalTarget {
  type RmwMsg = super::msg::rmw::GimbalTarget;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        yaw: msg.yaw,
        pitch: msg.pitch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      yaw: msg.yaw,
      pitch: msg.pitch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      yaw: msg.yaw,
      pitch: msg.pitch,
    }
  }
}


// Corresponds to rm_msgs__msg__ChassisCmd
/// 底盘速度指令（全向移动）

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {
    /// 前进方向速度 (m/s)
    pub vx: f64,

    /// 横移方向速度 (m/s)
    pub vy: f64,

    /// 自转角速度 (rad/s)
    pub wz: f64,

}



impl Default for ChassisCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChassisCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = super::msg::rmw::ChassisCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vx: msg.vx,
        vy: msg.vy,
        wz: msg.wz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vx: msg.vx,
      vy: msg.vy,
      wz: msg.wz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vx: msg.vx,
      vy: msg.vy,
      wz: msg.wz,
    }
  }
}


// Corresponds to rm_msgs__msg__WheelLegCmd
/// 轮腿机器人 6 个执行器的力矩指令 (N·m)
///
/// 字段顺序与 mjcf/robot.xml 中 <actuator> 的定义顺序一致，
/// 对应 MuJoCo 的 data.ctrl[0] ~ data.ctrl[5]。
///
/// 注意：这是"控制器 → 仿真/硬件"的指令消息，不是状态消息。

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelLegCmd {
    /// 右腿近端关节 joint_right_phi1  -> ctrl  (ctrlrange ±6.0)
    pub right_phi1: f64,

    /// 右腿远端关节 joint_right_phi4  -> ctrl  (ctrlrange ±6.0)
    pub right_phi4: f64,

    /// 左腿近端关节 joint_left_phi1   -> ctrl  (ctrlrange ±6.0)
    pub left_phi1: f64,

    /// 左腿远端关节 joint_left_phi4   -> ctrl  (ctrlrange ±6.0)
    pub left_phi4: f64,

    /// 右轮        right_wheel_torque -> ctrl  (ctrlrange ±2.0)
    pub right_wheel: f64,

    /// 左轮        left_wheel_torque  -> ctrl  (ctrlrange ±2.0)
    pub left_wheel: f64,

}



impl Default for WheelLegCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelLegCmd::default())
  }
}

impl rosidl_runtime_rs::Message for WheelLegCmd {
  type RmwMsg = super::msg::rmw::WheelLegCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        right_phi1: msg.right_phi1,
        right_phi4: msg.right_phi4,
        left_phi1: msg.left_phi1,
        left_phi4: msg.left_phi4,
        right_wheel: msg.right_wheel,
        left_wheel: msg.left_wheel,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      right_phi1: msg.right_phi1,
      right_phi4: msg.right_phi4,
      left_phi1: msg.left_phi1,
      left_phi4: msg.left_phi4,
      right_wheel: msg.right_wheel,
      left_wheel: msg.left_wheel,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      right_phi1: msg.right_phi1,
      right_phi4: msg.right_phi4,
      left_phi1: msg.left_phi1,
      left_phi4: msg.left_phi4,
      right_wheel: msg.right_wheel,
      left_wheel: msg.left_wheel,
    }
  }
}


