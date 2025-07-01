#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n),b(n),d(n);
    for (int i=0;i<n;++i) {
        cin>>a[i];
    }
    for (int i=0;i<n;++i) {
        cin>> b[i];
    }
    for (int i=0; i<n;++i) {
        d[i]=abs(a[i]-b[i]);
    }
    for (int i=0;i<n;++i) {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    return 0;
}