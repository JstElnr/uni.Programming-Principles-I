#include <iostream>
#include <cmath>
int main() {
    int n, k;
    std::cin >> n >> k;
    int result = std::ceil(static_cast<double>(n) / k);
    std::cout << result << std::endl;
    return 0;
}