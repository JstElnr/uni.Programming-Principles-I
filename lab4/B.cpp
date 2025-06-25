#include <iostream>
#include <vector>
using namespace std;
int main() {
    int W, H;
    cin >> W >> H;
    int n;
    cin >> n;
    vector<vector<bool>> canvas(H, vector<bool>(W, false));
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int y = y1; y < y2; ++y) {
            for (int x = x1; x < x2; ++x) {
                canvas[y][x] = true;
            }
        }
    }
    int unpaintedArea = 0;
    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            if (!canvas[y][x]) {
                ++unpaintedArea;
            }
        }
    }
    cout << unpaintedArea << endl;
    return 0;
}