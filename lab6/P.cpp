#include <iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    int positiveNumber=(number<0)?-number:number;
    cout<<positiveNumber<< endl;
    return 0;
}