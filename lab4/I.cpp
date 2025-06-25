#include <iostream>
using namespace std;
int main() {
    int h;
    cin >> h; 
    if (h % 2 == 1) {
        for (int i = 1; i <= h; ++i) {
            for (int j = 0; j < h - i; ++j) {
                cout << ".";
            }
            for (int j = 0; j < i; ++j) {
                cout << "#";
            }
            cout << endl;
        }
    } else {
        for (int i = 1; i <= h; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << "#";
            }
            for (int j = 0; j < h - i; ++j) {
                cout << ".";
            }
            cout << endl;
        }
    }
    return 0;
}