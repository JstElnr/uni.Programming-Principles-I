#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    int start,end;
    cin>>input>>start>>end;
    string substring=input.substr(start,end-start+1);
    cout<<substring<<endl;
    return 0;
}