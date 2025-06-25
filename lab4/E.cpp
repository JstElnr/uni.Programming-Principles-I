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
    bool isPerfect = true;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isPerfect = false;
                break;
            }
        }
        if (!isPerfect) break;
    }
    if (isPerfect) {
        cout << "Perfect." << endl;
    } else {
        cout << "Not perfect." << endl;
    }
    return 0;
}