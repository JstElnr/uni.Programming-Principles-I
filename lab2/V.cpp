#include <iostream>
using namespace std;
int flipBits(int n) {
    int mask = 511;
    return n ^ mask;
}
int main() {
    int n;
    cin >> n;
    int result = flipBits(n);
    cout << result << endl;
    return 0;
}