#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int max_element = *std::max_element(a.begin(), a.end());
    int min_element = *std::min_element(a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        if (a[i] == max_element) {
            a[i] = min_element;
        }
    }
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}