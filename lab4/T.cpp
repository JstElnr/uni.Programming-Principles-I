#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if ((matrix[i][j] == matrix[i][j+1]) && 
                (matrix[i][j] == matrix[i+1][j]) && 
                (matrix[i][j] == matrix[i+1][j+1])) {
                cout << "NO" << endl;
                return 0; 
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}