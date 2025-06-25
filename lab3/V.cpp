#include <iostream>
#include <vector>
using namespace std;

void cyclicShift(vector<int>& arr, int z) {
    int n = arr.size();
    z = (z % n + n) % n; 
    vector<int> shiftedArr(n);
    for (int i = 0; i < n; ++i) {
        shiftedArr[(i + z) % n] = arr[i];
    }
    arr = shiftedArr;
}

int main() {
    int n, z;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> z;
    cyclicShift(arr, z);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}