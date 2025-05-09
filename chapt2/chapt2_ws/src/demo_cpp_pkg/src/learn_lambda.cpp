#include <iostream>
#include <algorithm>

int main()
{
    auto add = [](int a, int b) -> int
    { return a + b; };
    int sum = add(299,50);

    auto print_sum = [sum]() -> void
    { std::cout << "Sum: " << sum << std::endl; };
    print_sum();

    return 0;
}