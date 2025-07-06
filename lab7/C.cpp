#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
vector<int>arr;
while(cin>>n){
    if(n==0){
        break;
        }else{
            arr.push_back(n);
        }
    
}
for(int i=0; i<(arr.size()+1)/2; i++){
     if (i == arr.size() - i - 1) {
            cout << arr[i];
        } else {
    int m = arr[i] + arr[arr.size() - i - 1];
    cout<<m<<" ";
        }
}
cout<<endl;
    return 0;
}