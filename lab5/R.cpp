#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    getline(cin,input); 
    string cleared;
    for (char c : input) {
        if (isalpha(c)) { 
        cleared += c; 
        }
    }
    cout<<cleared<<endl; 
    return 0;
}