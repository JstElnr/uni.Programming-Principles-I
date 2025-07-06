#include<iostream>
#include<vector>
#include<cmath>
int calculateDifference(const std::vector<int>& othersNOC, int togzhanNOC) {
    int sum=0;
    for(int noc:othersNOC) {
    sum+=noc;
    }
    int avgNOC=sum/othersNOC.size();
    return std::abs(togzhanNOC-avgNOC);
}
int main(){
    int n,togzhanNOC;
    std::cin>>n>>togzhanNOC;
    std::vector<int> othersNOC(n);
    for(int i=0;i<n;++i) {
        std::cin >> othersNOC[i];
    }
    std::cout<<calculateDifference(othersNOC,togzhanNOC)<<std::endl;
    return 0;
}