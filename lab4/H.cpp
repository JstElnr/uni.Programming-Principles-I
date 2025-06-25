#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n; 
    vector<vector<int>> points(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> points[i][j];
        }
    }
    int max_points = 0; 
    for (int i = 0; i < m; ++i) {
        int total_points = 0;
        for (int j = 0; j < n; ++j) {
            total_points += points[i][j];
        }
        max_points = max(max_points, total_points);  
    cout << max_points << endl; 

    return 0;
}