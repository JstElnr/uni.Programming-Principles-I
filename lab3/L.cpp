#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    auto it = std::lower_bound(a.begin(), a.end(), m);
    std::cout << (it - a.begin());
    return 0;
}