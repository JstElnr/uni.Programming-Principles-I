#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    int max_value = *std::max_element(array.begin(), array.end());
    std::cout << max_value << std::endl;
    return 0;
}