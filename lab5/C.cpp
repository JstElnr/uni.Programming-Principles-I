#include <iostream>
using namespace std;
int main() {
    string input;
    char character;
    int number;
    cin >> input>>character>>number;
    int count = 0;
    for (char c : input) {
        if (c==character) {
            count++;
        }
    }
    if (count == number) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}