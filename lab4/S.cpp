#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxValue = matrix[0][0];
    int maxRow = 0;
    int maxCol = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << maxRow + 1 << " " << maxCol + 1 << endl;
    return 0;
}