#include<iostream>
#include<unordered_map>
int main(){
    int N;
    std::cin>>N;
    std::unordered_map<int, int> sumCount;
    for(int i =0;i<N;++i) {
        int a,b;
        std::cin>>a>>b;
        int sum =a+b;
        std::cout<<sumCount[sum]<<std::endl;
        sumCount[sum]++;
    }
    return 0;
}