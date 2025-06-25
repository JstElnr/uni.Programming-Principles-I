#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<vector<int>> table(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == 0 || j == 0) {
                table[i][j] = i == 0 ? j : i;
            } else if (i == j) {
                table[i][j] = i * j;
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}