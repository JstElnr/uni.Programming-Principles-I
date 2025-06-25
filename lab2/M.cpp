#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "EAGLE" << endl;
    } else {
        cout << "TAILS" << endl;
    }
    return 0;
}