#include <iostream>
using namespace std;
int main(){
    string input;
    cin>>input;
    char last= input[0];
    for (char c : input) {
        if(c>last) {
        last= c;
        }
    }
    cout<<last<<endl;
    return 0;
}