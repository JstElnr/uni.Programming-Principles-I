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
    vector<int> unique;
    unique.push_back(a[0]);
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            unique.push_back(a[i]);
        }
    }
    for (int i = 0; i < unique.size(); ++i) {
        cout << unique[i] << " ";
    }
    cout << endl;
    return 0;
}