#include<iostream>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,k;
    std::cin>>n>>k;
    std::cout<<n+(k/100+k%10);
    return 0;
}