#include <iostream>
#include <string>
int main() {
    std::string number;
    std::cin >> number;
    if (number == std::string(number.rbegin(), number.rend())) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}