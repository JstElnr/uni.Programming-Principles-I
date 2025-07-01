#include <iostream>
#include <string>
using namespace std;
int main() {
    string ticket;
    cin>>ticket;
    int sum=0;
    int lastDigit=ticket[ticket.length()-1]-'0';
    for (char ch:ticket) {
        sum+=ch-'0';
    }
    if (lastDigit != 0 && sum % lastDigit == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}