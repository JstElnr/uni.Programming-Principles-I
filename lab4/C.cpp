#include <iostream>
#include <vector>
using namespace std;
const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    vector<vector<char>> field(n, vector<char>(m, '.'));
    vector<vector<int>> mineCount(n, vector<int>(m, 0));  // Count of nearby mines
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        field[x][y] = '*';
        for (int d = 0; d < 8; ++d) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] != '*') {
                mineCount[nx][ny]++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (field[i][j] != '*') {
                if (mineCount[i][j] > 0) {
                    field[i][j] = '0' + mineCount[i][j];  // Convert count to char
                } else {
                    field[i][j] = '.';
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}