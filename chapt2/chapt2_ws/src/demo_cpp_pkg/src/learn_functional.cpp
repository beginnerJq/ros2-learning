#include <iostream>
#include <functional>

// 自由函数

void save_with_free_fun(const std::string &file_name)
{
    std::cout << "Saving with free function: " << file_name << std::endl;
}

// 成员函数

class FileSaver
{
public:
    FileSaver(/** args */) = default;
    ~FileSaver() = default;

    void save_with_member_fun(const std::string &file_name)
    {
        std::cout << "Saving with member function: " << file_name << std::endl;
    }
};

int main()
{
    FileSaver file_saver;

    auto save_with_lambda = [](const std::string &file_name) -> void
    {
        std::cout << "Saving with lambda function: " << file_name << std::endl;
    };
    // save_with_free_fun("file1.txt");
    // file_saver.save_with_member_fun("file2.txt");
    // save_with_lambda("file3.txt");

    std::function<void(const std::string &)> save1 = save_with_free_fun;
    std::function<void(const std::string &)> save2 = save_with_lambda;

    std::function<void(const std::string &)> save3 = std::bind(&FileSaver::save_with_member_fun, &file_saver, std::placeholders::_1);

    save1("file1.txt");
    save2("file2.txt");
    save3("file3.txt");

    return 0;
}