import rclpy
from rclpy import Node

class NovelPubNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f"{node_name} is started")
        
def main():
    rclpy.init()
    node = NovelPubNode("novel_pub_node")
    rclpy.spin(node)
    rclpy.shutdown()
    