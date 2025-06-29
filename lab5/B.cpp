#include <iostream>
using namespace std;
int main(){
    string input;
    cin>>input;
    int lowercase = 0, uppercase = 0;
    for (char c : input) {
        if (islower(c)){
            lowercase++;
        } else if (isupper(c)) {
            uppercase++;
        }
    }
    cout<<lowercase<< " " <<uppercase<<endl;
    return 0;
}