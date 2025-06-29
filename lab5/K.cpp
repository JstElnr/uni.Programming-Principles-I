#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    if (s1.length()!= s2.length()) {
        cout<<"NO"<<endl;
        return 0;
    }
    unordered_map<char, int> count;
    for (char c : s1) {
        count[c]++;
    }
    for (char c : s2) {
        count[c]--;
    }
    for (const auto& pair : count) {
        if (pair.second!= 0) {
            cout <<"NO"<< endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}