#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include <chrono>

using namespace std::chrono_literals;

class TurtleControlNode : public rclcpp::Node
{
private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;  // 发布者的智能指针
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_; // 订阅者的智能指针
    double target_x_{1.0};
    double target_y_{1.0};
    double k_{1.0}; // 比例系数
    double max_speed_{3.0}; // 最大速度

public:
    explicit TurtleControlNode(const std::string &node_name) : Node(node_name)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10); // 创建发布者
        subscription_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&TurtleControlNode::on_pose_received, this, std::placeholders::_1)); // 创建订阅者
        // timer_ = this->create_wall_timer(1000ms, std::bind(&TurtleControlNode::timer_callback, this)); // 创建定时器
    }

    void on_pose_received(const turtlesim::msg::Pose::SharedPtr pose)
    {
        // 获取当前的位
        auto current_x = pose->x; // 获取当前x坐标
        auto current_y = pose->y; // 获取当前y坐标
        RCLCPP_INFO(this->get_logger(), "Current Position: x=%f, y=%f", current_x, current_y); // 打印当前坐标

        // 计算距离差和角度差
        auto distance = std::hypot(target_x_ - current_x, target_y_ - current_y); // 计算距离差
        auto angle = std::atan2(target_y_ - current_y, target_x_ - current_x) - pose->theta; // 计算角度差 

        auto msg = geometry_msgs::msg::Twist(); // 创建消息对象

        if(distance>0.1){   
            if(fabs(angle)>0.2){
                msg.angular.z = fabs(angle); // 计算角速度
            }else{
                msg.linear.x = k_ * distance; // 计算线速度
            }
        }

        // 限制最大值
        if (msg.linear.x > max_speed_) {
            msg.linear.x = max_speed_; // 限制线速度
        }

        publisher_->publish(msg);               // 发布消息
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);                                          // 初始化ROS2
    auto node = std::make_shared<TurtleControlNode>("turtle_control"); // 创建节点
    rclcpp::spin(node);                                                // 运行节点
    rclcpp::shutdown();                                                // 关闭ROS2
    return 0;
}