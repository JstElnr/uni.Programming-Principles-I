#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int yr;
    std::cin>>yr;
    if((yr%4==0&&yr%100!=0)||(yr%400==0)){
    std::cout<<"YES";
    }else {
    std::cout <<"NO";
    }
    return 0;
}