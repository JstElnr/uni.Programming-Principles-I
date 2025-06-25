#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int max_pos = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[max_pos]) {
            max_pos = i;
        }
    }
    cout << max_pos + 1; 
    return 0;
}