#include<iostream>
#include<cmath>
int main(){
    std::ios::sync_with_stdio(false);
    int a,b,c;
    std::cin>>a>>b>>c;
    float s = (a + b + c)/2.00f;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    std::cout<<area;
    return 0;
}