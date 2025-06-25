#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::cin >> m;
    std::vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    std::vector<int> merged;
    merged.reserve(n + m);
    merged.insert(merged.end(), a.begin(), a.end());
    merged.insert(merged.end(), b.begin(), b.end());
    std::sort(merged.begin(), merged.end());
    for (int num : merged) {
        std::cout << num << " ";
    }
    return 0;
}