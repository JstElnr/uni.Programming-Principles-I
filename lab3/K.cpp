#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, l, r;
    std::cin >> n >> l >> r;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::reverse(a.begin() + l - 1, a.begin() + r);
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}