#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void transposed_matrix(int n,int m){
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m; j++) cin>>array[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j = 0; j < n; j++){
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    transposed_matrix(n,m);
}