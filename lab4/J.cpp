#include <iostream>
using namespace std;
int main() {
    int n, m; 
    cin >> n >> m; 
    if (n != m) {
        cout << "Matrix must be square." << endl;
        return 1; 
    }
    int matrix[50][50]; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    int transposed[50][50];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed[j][i] = matrix[i][j]; 
        }
    }
    for (int i = 0; i < m; ++i) { 
        for (int j = 0; j < n; ++j) {
            cout << transposed[i][j]; 
            if (j < n - 1) cout << " ";
        }
        cout << endl; 
    }
    return 0;
}