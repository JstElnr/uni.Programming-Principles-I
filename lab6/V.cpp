#include <iostream>
#include <string>
using namespace std;
string decToHex(int n){
    string hex="";
    while(n > 0){
        int remainder=n%16;
        if(remainder<10){
            hex=char(remainder+'0')+hex;
        }else{
            hex=char(remainder-10+'A')+hex;
        }
        n/=16;
    }
    return hex;
}
int main() {
    int N;
    cin>>N;
    string hexRepresentation=decToHex(N);
    cout<<hexRepresentation<<endl;
    return 0;
}