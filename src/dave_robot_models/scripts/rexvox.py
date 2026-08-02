#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64

class RexrovThrusterManager(Node):
    def __init__(self):
        super().__init__('rexrov_thruster_manager')
        
        # Lắng nghe lệnh từ bàn phím (teleop_twist_keyboard)
        self.sub = self.create_subscription(Twist, '/cmd_vel', self.cmd_cb, 10)

        # Tạo 8 publisher gửi lệnh thẳng vào Gazebo
        self.pubs = []
        for i in range(1, 9):
            topic = f'/model/rexrov/joint/thruster{i}_joint/cmd_thrust'
            self.pubs.append(self.create_publisher(Float64, topic, 10))
            
        self.get_logger().info("RexROV Thruster Manager Ready! Đang chờ lệnh từ /cmd_vel...")

    def cmd_cb(self, msg):
        # Hệ số khuếch đại lực đẩy (có thể tinh chỉnh lại nếu tàu chạy chậm)
        linear_gain = 500.0
        angular_gain = 200.0
        
        x = msg.linear.x * linear_gain
        z = msg.linear.z * linear_gain
        yaw = msg.angular.z * angular_gain

        thrusts = [0.0] * 8

        # 4 Chân vịt đẩy ngang (1, 2, 3, 4)
        thrusts[0] = x - yaw  # Thruster 1 (Trái)
        thrusts[1] = x - yaw  # Thruster 2 (Trái)
        thrusts[2] = x + yaw  # Thruster 3 (Phải)
        thrusts[3] = x + yaw  # Thruster 4 (Phải)

        # 4 Chân vịt thẳng đứng (5, 6, 7, 8)
        thrusts[4] = z
        thrusts[5] = z
        thrusts[6] = z
        thrusts[7] = z

        # Gửi lệnh đi
        for i in range(8):
            t_msg = Float64()
            t_msg.data = float(thrusts[i])
            self.pubs[i].publish(t_msg)

def main():
    rclpy.init()
    node = RexrovThrusterManager()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()