#include <iostream>
#include <string>
using namespace std;
string strToBool(string str){
    if(str.length() == 1){
        if(str=="1") {
            return "true";
        }else if(str=="0"){
            return "false";
        }
    }
    return str;
}
int main() {
    string input;
    cin >> input;
    string result=strToBool(input);
    cout<<result<<endl;
    return 0;
}
