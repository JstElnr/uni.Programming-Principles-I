#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findNthNumber(const vector<int>& arr,int x) {
    vector<bool> present(1001,false);
    for (int id:arr) {
        if (id>=1&&id<=1000){
            present[id]=true;
        }
    }
    vector<int> missing;
    for (int i=1;i<=1000;++i) {
        if(!present[i]) {
            missing.push_back(i);
        }
    }
    if(x>missing.size()) {
        return -1;
    }
    return missing[x-1];
}
int main(){
    vector<int> arr;
    int num;
    while (cin>>num) {
        arr.push_back(num);
        if (cin.peek()=='\n')break;
    }
    int x;
    cin >> x;
    int result=findNthNumber(arr,x);
    cout<<result<<endl;
    return 0;
}