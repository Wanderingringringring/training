import rclpy
from rclpy.node import Node

class BombTimer(Node):
    def __init__(self):
        # 给这个节点起名叫 'my_bomb'
        super().__init__('my_bomb')
        self.count = 5  # 倒计时从 5 开始
        # 设定一个定时器，每隔 1.0 秒执行一次 tick 函数
        self.timer = self.create_timer(1.0, self.tick)
        self.get_logger().info('💣 炸弹已启动，开始倒计时！')

    def tick(self):
        if self.count > 0:
            self.get_logger().info(f'倒计时: {self.count}...')
            self.count -= 1
        else:
            self.get_logger().warn('💥 BOOM! 爆炸啦！')
            # 退出程序（关掉定时器）
            self.timer.cancel() 

def main(args=None):
    rclpy.init(args=args)
    node = BombTimer()
    rclpy.spin(node)  # 让程序一直卡在这里，等定时器触发
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()