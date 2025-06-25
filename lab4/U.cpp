#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long cnt=0;
    string arr[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            if(i==j||i+j==n-1){
                arr[i][j]="*";
            }   
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
                arr[i][0]="*";
                arr[0][j]="*";
                arr[i][n-1]="*";
                arr[n-1][j]="*";
            
            }
    }
    for (int i=1; i<n-1; i++){
        for (int j=1; j<n-1;j++){
            if(i==j||i+j==n-1){
                continue;
               }cnt += stoi(arr[i][j]);
        }
    }
     for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
     }
     cout<<"  " <<cnt;
    
    return 0;
}