#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; 
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - 1 - i]; 
    }
    cout << sum << endl; 
    return 0;
}