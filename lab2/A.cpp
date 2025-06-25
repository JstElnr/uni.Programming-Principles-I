#include <iostream>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin>>n;
    if (n == 0){
        std::cout << "None";
    } else if (n % 2 == 0) {
        std::cout<<"Even";
    } else {
        std::cout<<"Odd";
    }
    return 0;
}