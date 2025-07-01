#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
int findGCD(int x, int y) {
    while(y){
        tie(x, y)=make_pair(y, x % y);
    }
    return x;
}
int maxPairGCD(const vector<int>& numbers){
    int result=0;
    int len=numbers.size();
    for (int a=0; a < len-1;++a) {
        for (int b=a+1;b<len;++b) {
            result=max(result, findGCD(numbers[a],numbers[b]));
        }
    }
    return result;
}
int main(){
    int size;
    cin>>size;
    vector<int> data(size);
    for (int& val:data){
        cin>>val;
    }
    cout<<maxPairGCD(data)<<'\n';
    return 0;
}
