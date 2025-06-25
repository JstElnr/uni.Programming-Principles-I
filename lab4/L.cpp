#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m; 
    vector<vector<int>> grades(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grades[i][j];
        }
    }
    int min_sum = 1000;
    int min_index = -1;
    for (int i = 0; i < n; ++i) {
        int current_sum = 0;
        for (int j = 0; j < m; ++j) {
            current_sum += grades[i][j];
        }
        if (current_sum < min_sum) {
            min_sum = current_sum; 
            min_index = i;
        }
    }
    cout << (min_index + 1) << endl; 
    return 0;
}