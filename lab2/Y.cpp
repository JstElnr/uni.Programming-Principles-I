#include <iostream>
using namespace std;
bool isLeapYear(int yr) {
    if (yr%4==0) {
        if (yr%100==0) {
            if (yr%400==0) return true;
            else return false;
        } else return true;
    } else return false;
}
bool isValidDate(int dy,int mnth,int yr) {
    if (yr<1||mnth<1||mnth>12||dy<1) return false;
    int dysInMnth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(yr)) dysInMnth[1] = 29;
    if (dy > dysInMnth[mnth - 1]) return false;
    return true;
}
int main() {
    int dy, mnth, yr;
    cin>>dy>>mnth>>yr;
    if (isValidDate(dy, mnth, yr)) cout<<"yes";
    else cout << "no";
    return 0;
}