#include<iostream>
#include<unordered_set>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    for (int i=0;i<n;++i) {
        std::cin >> arr[i];
    }
    std::unordered_set<int> seen;
    for (int num:arr) {
        if(seen.find(num) == seen.end()) {
        std::cout<<"YES"<<std::endl;
        seen.insert(num);
        } else{
            std::cout<<"NO"<<std::endl;
        }
    }
    return 0;
}
