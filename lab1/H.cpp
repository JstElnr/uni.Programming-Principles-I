#include<iostream>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,m,t;
    std::cin>>n>>m>>t;
    std::cout<<m+n-t;
    return 0;
}