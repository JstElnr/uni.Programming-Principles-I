#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    int total_sum = 0;
    vector<pair<int, int>> min_coordinates(m);
    for (int j = 0; j < m; ++j) {
        int min_value = numeric_limits<int>::max();
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] < min_value) {
                min_value = matrix[i][j];
                min_coordinates[j] = {i + 1, j + 1};
            }
        }
        total_sum += min_value;
    }
    cout << "coordinates of min elements: " << endl;
    for (const auto& coord : min_coordinates) {
        cout << coord.first << ";" << coord.second << endl;
    }
    cout << endl << "Their sum:" << endl;
    cout << total_sum << endl;
    return 0;
}