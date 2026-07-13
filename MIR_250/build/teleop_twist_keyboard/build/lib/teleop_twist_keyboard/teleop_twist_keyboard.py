#!/usr/bin/env python3
import select
import sys
import termios
import tty

import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node


def build_publish_topics(requested_topic=None):
    topics = ['/cmd_vel', '/cmd_vel_keyb']
    if requested_topic:
        normalized_topic = requested_topic if requested_topic.startswith('/') else f'/{requested_topic}'
        if normalized_topic not in topics:
            topics.append(normalized_topic)
    return topics


class TeleopTwistKeyboardNode(Node):
    def __init__(self):
        super().__init__('teleop_twist_keyboard')
        self.declare_parameter('cmd_vel_topic', 'cmd_vel')
        requested_topic = self.get_parameter('cmd_vel_topic').get_parameter_value().string_value
        self.publishers_ = []
        for topic in build_publish_topics(requested_topic):
            self.publishers_.append(self.create_publisher(Twist, topic, 10))
        self.linear_speed = 0.3
        self.angular_speed = 0.5
        self.get_logger().info(
            f'Keyboard teleop ready. Publishing to {", ".join(build_publish_topics(requested_topic))}. '
            'Keys: i/j/k/l, , and q to quit.'
        )

    def get_key(self):
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setcbreak(fd)
            ready, _, _ = select.select([sys.stdin], [], [], 0.1)
            if ready:
                return sys.stdin.read(1)
            return ''
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def run(self):
        while rclpy.ok():
            key = self.get_key()
            if not key:
                continue
            twist = Twist()

            if key in ('i', 'I'):
                twist.linear.x = self.linear_speed
            elif key in (',', '<'):
                twist.linear.x = -self.linear_speed
            elif key in ('j', 'J'):
                twist.angular.z = self.angular_speed
            elif key in ('l', 'L'):
                twist.angular.z = -self.angular_speed
            elif key in ('k', 'K'):
                twist.linear.x = 0.0
                twist.angular.z = 0.0
            elif key in ('q', 'Q'):
                self.get_logger().info('Exiting teleop.')
                break
            else:
                continue

            self.publish_twist(twist)

        self.publish_twist(Twist())

    def publish_twist(self, twist):
        for publisher in self.publishers_:
            publisher.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = TeleopTwistKeyboardNode()
    try:
        node.run()
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
