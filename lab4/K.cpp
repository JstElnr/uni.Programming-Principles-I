#include <iostream>
using namespace std;
int main() {
    int h; 
    cin >> h; 
    for (int i = 0; i < h; ++i) {
        int spaces = h - i - 1;
        int stars = 2 * i + 1;
        for (int j = 0; j < spaces; ++j) {
            cout << '.';
        }
        for (int j = 0; j < stars; ++j) {
            cout << '*';
        }
        for (int j = 0; j < spaces; ++j) {
            cout << '.';
        }
        
        cout << endl; 
    }
    return 0;
}