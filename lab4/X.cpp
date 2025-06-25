#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<int> unique_numbers;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int value;
            cin >> value;
            unique_numbers.insert(value);
        }
    }
    if (unique_numbers.size() < 2) {
        cout << 0 << endl;
    } else {
        auto it = unique_numbers.end();
        --it;
        --it;
        cout << *it << endl;
    }

    return 0;
}