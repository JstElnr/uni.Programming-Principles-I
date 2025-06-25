#include <iostream>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    if(n<=k) {
        cout<< 2;
    } else{
        int minutes=(2*n+k-1)/k;
        cout<<minutes;
    }
    return 0;
}