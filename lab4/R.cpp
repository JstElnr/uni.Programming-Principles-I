#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            int root = static_cast<int>(sqrt(matrix[i][j]));
            if (root * root == matrix[i][j]) {
                matrix[i][j] = root;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}