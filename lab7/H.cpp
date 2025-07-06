#include <iostream>
#include <vector>
int findSingleNumber(const std::vector<int>& nums) {
int singleNumber = 0;
    for(int num:nums) {
        singleNumber^=num;
    }
    return singleNumber;
}
int main(){
    int n;
    std::cin>>n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; ++i){
    std::cin>>nums[i];
    }
    std::cout<<findSingleNumber(nums)<<std::endl;
    return 0;
}