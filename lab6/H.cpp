#include <iostream>
#include <string>
using namespace std;
int main() {
    string number;
    cin>>number;
    bool isValid=true;
    for(char digit:number) {
        if(digit!='0'&&digit!='2'&&digit!='4'&&digit!='6'&&digit!='8') {
            isValid=false;
            break;
        }
    }
    if(isValid){
        cout<<"Valid"<<endl;
    } else{
        cout<<"Not valid"<<endl;
    }
    return 0;
}