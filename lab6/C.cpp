#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    vector<int> freqA(101,0),freqB(101,0);
    for (int i=0;i<n;++i) {
        cin>>a[i];
        freqA[a[i]]++;
    }
    for (int i=0;i<n;++i) {
        cin>>b[i];
        freqB[b[i]]++;
    }
    int pairs=0;
    for (int i=1;i<=100;++i) {
        pairs+=min(freqA[i],freqB[i]);
    }
    cout<<pairs<<endl;
    return 0;
}