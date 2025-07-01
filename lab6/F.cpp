#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s>>n;
    int digitCount=0;
    for(char c:s) {
        if(isdigit(c)) {
        digitCount++;
        if(digitCount >= n) {
        cout<<"YES"<<endl;
        return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}