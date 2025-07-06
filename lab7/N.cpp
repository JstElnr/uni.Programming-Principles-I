#include <iostream>
#include <set>
#include <vector>
int main() {
    int N;
    std::cin>> N;
    std::set<int> uniqueElements;
    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin>> arr[i];
        uniqueElements.insert(arr[i]);
    }
    if (uniqueElements.size() == N) {
        std::cout<<"YES" << std::endl;
    } else {
        std::cout<<"NO" << std::endl;
    }
    return 0;
}