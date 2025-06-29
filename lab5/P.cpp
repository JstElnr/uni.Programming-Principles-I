#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    cin>>input;
    string shifted;
    for(char c : input) {
        if(c=='z') {
        shifted+='a';
        }else{
        shifted+=(c+1);
        }
    }
    cout<<shifted<<endl;
    return 0;
}