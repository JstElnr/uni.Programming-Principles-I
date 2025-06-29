#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cin >> input;
    char last= 'a' - 1; 
    for (char c : input) {
        if (c<last) {
            cout<<"NO"<<endl;
            return 0;
        }
        last= c; 
    }
    cout<<"YES"<<endl;
    return 0;
}