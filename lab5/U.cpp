#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin>> s;
    char maxChar = s[0], currentChar = s[0];
    int maxLength = 1, currentLength = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == currentChar) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxChar = currentChar;
            }
            currentChar = s[i];
            currentLength = 1;
        }
    }
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxChar = currentChar;
    }
    cout<< maxChar << " " << maxLength << endl;
    return 0;
}