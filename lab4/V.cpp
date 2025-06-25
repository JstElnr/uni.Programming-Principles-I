#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " is prime" << endl;
        }
    }
    return 0;
}
