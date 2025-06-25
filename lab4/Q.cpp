#include <iostream>
using namespace std;
int main() {
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            if (num < 0) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}