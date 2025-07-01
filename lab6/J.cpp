#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>> d;
    int maxNumber=a;
    if(b>maxNumber){
        maxNumber=b;
    }
    if(c>maxNumber){
        maxNumber=c;
    }
    if (d>maxNumber){
        maxNumber=d;
    }
    cout<<maxNumber<<endl;
    return 0;
}