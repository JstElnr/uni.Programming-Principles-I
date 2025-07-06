#include<iostream>
#include<vector>
#include<cmath>
int main() {
    int numStudents,togzhanNOC;
    std::cin>>numStudents>>togzhanNOC;
    std::vector<int> studentNOCs(numStudents);
    int sum=0;
    for(int i = 0; i < numStudents; ++i){
        std::cin >> studentNOCs[i];
        sum+=studentNOCs[i];
    }
    int avgNOC=sum/numStudents;
    int difference=std::abs(togzhanNOC-avgNOC);
    std::cout<<difference<<std::endl;
    return 0;
}