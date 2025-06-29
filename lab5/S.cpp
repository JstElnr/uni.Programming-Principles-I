#include<iostream>
#include<string>
using namespace std;
int main() {
    string s,t;
    cin>>s>>t;
    int first= -1;
    int last= -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]== t[0]) { 
            if (first== -1) {
            first= i; 
            }
            last= i; 
        }
    }
    if (first!= -1) {
        if (first==last) {
        cout<<first<<endl; 
        } else {
        cout<<first<<" "<<last<<endl;
        }
    }
    return 0;
}