#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int size,togzhanNOC;
    cin>>size>>togzhanNOC;
    vector<int> otherNOCs(size);
    int sum=0;
    for (int i=0;i<size;++i) {
        cin>>otherNOCs[i];
        sum+=otherNOCs[i];
    }
    int averageNOC=sum/size;
    int difference=abs(togzhanNOC-averageNOC);
    cout<<difference<<endl;
    return 0;
}