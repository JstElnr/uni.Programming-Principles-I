#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum;
    return 0;
}