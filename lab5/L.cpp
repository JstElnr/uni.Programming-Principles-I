#include <iostream> 
#include <string> 
#include <algorithm> 
using namespace std; 
int main(){ 
    string s; 
    cin>>s; 
    char x=s[0]; 
    s+=x; 
    string a=s; 
    reverse(a.begin(),a.end()); 
    if(a==s){ 
        cout<<"YES"; 
    } 
    else{ 
        cout<<"NO"; 
    } 
}
