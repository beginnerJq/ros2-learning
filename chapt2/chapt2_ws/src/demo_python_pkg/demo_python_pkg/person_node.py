import rclpy
from rclpy.node import Node

class PersonNode(Node):
    def __init__(self, name:str, age:int) -> None:
        super().__init__('person_node')
        self.name = name
        self.age = age
        
    def eat(self, food: str) -> None:
        print("eat", food)
    
def main():
    rclpy.init()
    node = PersonNode('张三', 18)
    node.eat("apple")
    node.get_logger().info('你好 person_node 节点！') 
    rclpy.spin(node)
    rclpy.shutdown()
