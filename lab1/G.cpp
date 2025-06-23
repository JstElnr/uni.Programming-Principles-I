#include <iostream>
#include <cmath>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t,n;
    std::cin>>t>>n;
    std::cout<<t*pow(2, n);
    return 0;
}