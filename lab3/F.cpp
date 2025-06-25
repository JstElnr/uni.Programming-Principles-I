#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    } else if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    cout << c;
    return 0;
}