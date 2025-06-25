#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int costa, costb, costc;
    int money;
    cin >> a >> b >> c;
    cin >> costa >> costb >> costc;
    cin >> money;
    int totalCost = a * costa + b * costb + c * costc;
    if (money >= totalCost) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}