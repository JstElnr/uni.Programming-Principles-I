#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> uniqn;
    int num;
    while (cin >> num) {
    uniqn.insert(num);
    }
    cout<< uniqn.size()<< endl;
    return 0;
}