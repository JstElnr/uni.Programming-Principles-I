#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<int> array;
    int num;
    while (std::cin >> num) {
        array.push_back(num);
    }
    int sum = std::accumulate(array.begin(), array.end(), 0);
    std::cout << sum;
    return 0;
}