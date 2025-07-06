#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
bool are_digits_unique(int num) {
    string str = to_string(num);
    unordered_set<char> digits;
    for (char c : str){
        if (digits.find(c) != digits.end()) {
            return false;
        }
        digits.insert(c);
    }
    return true;
}
int main() {
    int l, r;
    cin>>l>>r;
    for (int num = l; num <= r; num++) {
        if (are_digits_unique(num)) {
            cout<< num << endl;
            return 0;
        }
    }
    cout<<"Understandable, have a great day" << endl;
    return 0;
}