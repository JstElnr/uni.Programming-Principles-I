#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n,z;
    cin>>n;
    unordered_set<int> bookIDs;
    for(int i=0; i<n;++i) {
        int id;
        cin>>id;
        bookIDs.insert(id);
    }
    cin>>z;
    if(bookIDs.find(z)!=bookIDs.end()) {
    cout<<"Yes"<<endl;
    }else{
    cout<<"No"<<endl;
    }
    return 0;
}