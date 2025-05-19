#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <chrono>

using namespace std::chrono_literals;

class TurtleCircleNode : public rclcpp::Node
{
private:
    rclcpp::TimerBase::SharedPtr timer_;                                // 定时器的智能指针
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_; // 发布者的智能指针
public:
    explicit TurtleCircleNode(const std::string &node_name) : Node(node_name)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);       // 创建发布者
        timer_ = this->create_wall_timer(1000ms, std::bind(&TurtleCircleNode::timer_callback, this)); // 创建定时器
    }

    void timer_callback()
    {
        auto msg = geometry_msgs::msg::Twist(); // 创建消息对象
        msg.linear.x = 1.0;                     // 设置线速度
        msg.angular.z = 0.5;                    // 设置角速度
        publisher_->publish(msg);               // 发布消息
    }
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);                                             // 初始化ROS2
    auto node = std::make_shared<TurtleCircleNode>("turtle_circle_node"); // 创建节点
    rclcpp::spin(node);                                                   // 运行节点
    rclcpp::shutdown();                                                   // 关闭ROS2
    return 0;
}