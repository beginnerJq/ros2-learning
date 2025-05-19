import espeakng
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from queue import Queue
import threading
import time

class NovelSubNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f"{node_name} is started")
        self.novels_queue_ = Queue()
        self.novel_subscriber_ = self.create_subscription(String, 'novel', self.novel_callback, 10)
        self.speech_thread_ = threading.Thread(target=self.speech_callback)
        self.speech_thread_.start()
    
    def novel_callback(self, msg):
        self.novels_queue_.put(msg.data)
    
    def speech_callback(self):
        speaker = espeakng.Speaker()
        speaker.voice = 'zh'
        
        while rclpy.ok(): #检查状态是否正常
            if(self.novels_queue_.qsize() > 0):
                text = self.novels_queue_.get()
                self.get_logger().info(f"朗读：{text}")
                speaker.say(text)
                speaker.wait() #等他说完
            else:
                #让线程休眠一会儿，避免CPU占用过高
                time.sleep(1) 
        
def main():
    rclpy.init()
    node = NovelSubNode("novel_sub_node")
    rclpy.spin(node)
    rclpy.shutdown()
    