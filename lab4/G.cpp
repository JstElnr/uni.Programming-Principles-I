#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if (x < 0 || x > 7 || y < 0 || y > 7) {
        cout << "Impossible" << endl;
        return 0;
    }
    vector<vector<char>> board(8, vector<char>(8, '*'));
    board[x][y] = '1';
    for (int i = 0; i < 8; ++i) {
        if (i != x) board[i][y] = '2';
        if (i != y) board[x][i] = '2';
    }
    for (int i = 1; i < 8; ++i) {
        if (x - i >= 0 && y - i >= 0) board[x - i][y - i] = '2';
        if (x - i >= 0 && y + i < 8) board[x - i][y + i] = '2';
        if (x + i < 8 && y - i >= 0) board[x + i][y - i] = '2';
        if (x + i < 8 && y + i < 8) board[x + i][y + i] = '2';
    }
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}