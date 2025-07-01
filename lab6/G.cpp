#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    unordered_set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
    string result;
    for (char c:s) {
        if(vowels.find(c)==vowels.end()) {
            result+=c;
        }
    }
    cout<<result<<endl;
    return 0;
}