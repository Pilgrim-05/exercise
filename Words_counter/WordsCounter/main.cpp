#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> v{"apple", "pear", "banana", "orange", "lemon", "lime", "pineapple", "peach", "plum"};
    char ch;
    std::cin >> ch;

    auto words = [&v](char c) {
        size_t count{};
        for(const auto &el : v)
        {
            if(el[0] == c)
                ++count;
        }
        return count;
    }(ch);

    std::cout << words << std::endl;

    return 0;
}
