import rclpy
from rclpy.node import Node
import requests
from example_interfaces.msg import String
from queue import Queue

class NovelPubNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f"{node_name} is started")
        self.novels_queue_ = Queue()
        self.novel_publisher_ = self.create_publisher(String, 'novel', 10)
        self.create_timer(5, self.timer_callback)
        
    def timer_callback(self):
        if self.novels_queue_.qsize() > 0:
            line = self.novels_queue_.get()
            msg = String()
            msg.data = line
            self.novel_publisher_.publish(msg)
            self.get_logger().info(f"发布了{msg}")
        
    def download(self, url):
        reponse = requests.get(url)
        reponse.encoding = 'utf-8'
        text = reponse.text
        self.get_logger().info(f"{url}: {len(text)}")
        for line in text.splitlines():
            self.novels_queue_.put(line)
        
def main():
    rclpy.init()
    node = NovelPubNode("novel_pub_node")
    node.download('http://localhost:8000/novel1.txt')
    rclpy.spin(node)
    rclpy.shutdown()