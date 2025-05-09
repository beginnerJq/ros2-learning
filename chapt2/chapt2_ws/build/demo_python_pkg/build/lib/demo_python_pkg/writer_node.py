import rclpy
from demo_python_pkg.person_node import PersonNode

class WriterNode(PersonNode):
    def __init__(self, name:str, age:int ,book:str) -> None:
        super().__init__(name, age)
        self.book = book
    
def main():
    rclpy.init()
    node = WriterNode('李斯', 50 ,'论快速入狱')
    node.eat("apple")
    node.get_logger().info('你好 WriterNode 节点！') 
    rclpy.spin(node)
    rclpy.shutdown()