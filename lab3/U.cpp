#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    std::unordered_map<int, int> frequency;
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
        frequency[numbers[i]]++;
    }
    int max_freq = 0;
    for (const auto& pair : frequency) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
        }
    }
    std::vector<int> modes;
    for (const auto& pair : frequency) {
        if (pair.second == max_freq) {
            modes.push_back(pair.first);
        }
    }
    std::sort(modes.rbegin(), modes.rend());
    for (int mode : modes) {
        std::cout << mode << " ";
    }
    return 0;
}