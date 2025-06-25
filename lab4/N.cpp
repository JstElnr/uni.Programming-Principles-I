#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int max_value = matrix[0][0];
    int max_row = 0, max_col = 0;
    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] > max_value) {
            max_value = matrix[i][i];
            max_row = i;
            max_col = i;
        }
    }
    cout << "Maximum element is: " << max_value << " with coordinates: " << max_row + 1 << ";" << max_col + 1;
    return 0;
}