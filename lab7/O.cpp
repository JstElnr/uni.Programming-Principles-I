#include<iostream>
#include<set>
#include<vector>
int main() {
    int N;
    std::cin>>N;
    std::vector<int> arr(N);
    std::set<int> uniqueSums;
    for (int i= 0; i < N; ++i) {
        std::cin>>arr[i];
    }
    for (int i= 0;i < N - 1; ++i) {
        int sum=arr[i] + arr[i + 1];
        uniqueSums.insert(sum);
    }
    std::cout<<uniqueSums.size()<< std::endl;
    return 0;
}