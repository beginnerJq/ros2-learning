#include <QApplication>
#include <QLabel>
#include <QString>
#include <rclcpp/rclcpp.hpp>
#include <status_interface/msg/system_status.hpp>

using SystemStatus = status_interface::msg::SystemStatus;

class SysStatusDisplay : public rclcpp::Node
{
private:
    rclcpp::Subscription<SystemStatus>::SharedPtr status_subscriber_;
    QLabel *label_;

public:
    SysStatusDisplay()
        : Node("sys_status_display")
    {
        label_ = new QLabel();
        status_subscriber_ = this->create_subscription<SystemStatus>("sys_status_pub", 10, [&](const SystemStatus::SharedPtr msg) -> void
        { 
            label_->setText(get_qstr_from_msg(msg)); 
        });

        label_->setText(get_qstr_from_msg(std::make_shared<SystemStatus>()));
        label_->show();
    }

    QString get_qstr_from_msg(const SystemStatus::SharedPtr msg)
    {
        std::stringstream short_str;
        short_str << "系统状态可视化显示工具: "
                  << "数据时间：\t" << msg->stamp.sec << "\ts\n"
                  << "主机名字：\t" << msg->host_name << "\t\n"
                  << "CPU 使用率：\t" << msg->cpu_percent << "\t\n"
                  << "内存使用率：\t" << msg->memory_percent << "\t\n"
                  << "内存总大小：\t" << msg->memory_total << "\tMB\n"
                  << "剩余有效内存：\t" << msg->memory_available << "\tMB\n";

        return QString::fromStdString(short_str.str());
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv); // 初始化ROS2
    QApplication app(argc, argv);
    auto node = std::make_shared<SysStatusDisplay>(); // 创建节点

    std::thread spin_thread([&]()->void 
    {
        rclcpp::spin(node); // 在新线程中运行节点
    });
    spin_thread.detach(); // 分离线程
    app.exec(); // 执行应用，阻塞代码

    return 0;
};