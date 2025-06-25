#include <iostream>
using namespace std;
int findRightmostSetBit(int n) {
    int index = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        index++;
    }
    return index;
}
int main() {
    int n;
    cin >> n;
    int result = findRightmostSetBit(n);
    cout << result << endl;
    return 0;
}