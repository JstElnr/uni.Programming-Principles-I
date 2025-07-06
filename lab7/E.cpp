#include<iostream>
#include<vector>
int findMissingNumber(const std::vector<int>& nums,int n) {
    int expectedSum=n*(n+1)/2;
    int actualSum=0;
    for(int num:nums) {
    actualSum+=num;
    }
 return expectedSum-actualSum;
}
int main(){
    int n;
    std::cin>>n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
    std::cin>>nums[i];
    }
    std::cout<<findMissingNumber(nums, n)<<std::endl;
    return 0;
}