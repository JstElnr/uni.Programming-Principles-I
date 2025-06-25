#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rearrangeMatrix(int n, int m, vector<vector<int>>& matrix) {
    vector<int> flat_list;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            flat_list.push_back(matrix[i][j]);
        }
    }
    sort(flat_list.begin(), flat_list.end());
    vector<int> rearranged;
    int left = 0, right = flat_list.size() - 1;
    while (left <= right) {
        if (right >= left) {
            rearranged.push_back(flat_list[right]);
            --right;
        }
        if (left <= right) {
            rearranged.push_back(flat_list[left]);
            ++left;
        }
    }
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = rearranged[idx++];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    rearrangeMatrix(n, m, matrix);
    return 0;
}