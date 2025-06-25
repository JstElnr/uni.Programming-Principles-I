#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int flipped = ~x & 0xFF;
    cout << flipped << endl;
    return 0;
}