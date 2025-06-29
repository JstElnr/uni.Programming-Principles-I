#include <iostream>
#include <string>
using namespace std;
bool is_palindrome(const string& s) {
    int left = 0;
    int right=s.length()-1;
    while(left < right){
        if(s[left]!=s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true; 
}
int main() {
    string input_string;
    cin >> input_string;
    if(is_palindrome(input_string)) {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}