#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string input;
    cin>>input;
    unordered_map<char,int> digit;
    for (char c : input) {
        if (isdigit(c)){
        digit[c]++;
        }
    }
    int first= -1;
    bool equal=true;
    for (auto& pair : digit) {
        if (first==-1) {
            first= pair.second;
        } else if (pair.second != first) {
            equal = false;
            break;
        }
    }
    if (equal){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}