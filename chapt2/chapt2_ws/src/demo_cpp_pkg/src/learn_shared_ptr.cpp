#include <iostream>
#include <memory>

int main()
{
    auto p1 = std::make_shared<std::string>("this is a str"); // 使用 std::make_shared 创建一个 shared_ptr
    std::cout << "p1的引用计数：" << p1.use_count() << "，内存地址：" << p1.get() << std::endl;

    auto p2 = p1;
    std::cout << "p1的引用计数：" << p1.use_count() << "，内存地址：" << p1.get() << std::endl;
    std::cout << "p2的引用计数：" << p2.use_count() << "，内存地址：" << p2.get() << std::endl;

    p1.reset();
    std::cout << "p1的引用计数：" << p1.use_count() << "，内存地址：" << p1.get() << std::endl;
    std::cout << "p2的引用计数：" << p2.use_count() << "，内存地址：" << p2.get() << std::endl;
    
    // std::cout << "p1的指向的内存地址数据" << p1->c_str() << std::endl;
    std::cout << "p2的指向的内存地址数据：" << p2->c_str() << std::endl;

    return 0;
}