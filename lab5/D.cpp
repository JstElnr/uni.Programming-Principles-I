#include <iostream>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    if (s2.size() % s1.size() == 0) {
        string repeated = "";
        int repeat= s2.size() / s1.size();
        for (int i = 0; i < repeat; i++) {
        repeated+=s1;
        }
        if (repeated==s2) {
        cout<<"YES"<<endl;
        } else {
        cout<<"NO"<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}