#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin>>n;
    if (n % 2 != 0) {
        std::cout << "Super";
    }else if(n>=2&&n<=5) {
    std::cout<<"Not Super";
    }else if(n >= 6 && n <= 20){
    std::cout<<"Super";
    }else if(n>20){
    std::cout<<"Not Super";
    }

    return 0;
}