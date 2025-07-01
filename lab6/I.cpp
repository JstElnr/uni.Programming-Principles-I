#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cin>>input;
    for (size_t i=0;i<input.size();++i){
        if (i%2==0) {
            input[i]=toupper(input[i]);
        }
    }
    cout<<input<<endl;
    return 0;
}