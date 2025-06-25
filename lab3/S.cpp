#include <iostream>
#include <cmath>
int main() {
    long long x;
    std::cin >> x;
    long long root = static_cast<long long>(sqrt(x));
    if (root * root == x) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}