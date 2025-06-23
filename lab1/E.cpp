#include <iostream>
#include <algorithm>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int h;
    std::cin >> h;
    std::cout<<(h*30==180?0:std::min(h*30,360-h*30));
    return 0;
}