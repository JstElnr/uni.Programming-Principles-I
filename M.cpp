#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; 
    for (int i = 0; i < n; ++i) {
        int odd_number = 2 * i + 1;
        for (int j = 0; j < n; ++j) {
            cout << odd_number;
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}