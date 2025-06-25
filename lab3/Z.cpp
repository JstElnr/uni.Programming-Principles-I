#include <iostream>
#include <vector>
#include <algorithm>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int max_gcd = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            max_gcd = std::max(max_gcd, gcd(a[i], a[j]));
        }
    }
    std::cout << max_gcd << std::endl;
    return 0;
}