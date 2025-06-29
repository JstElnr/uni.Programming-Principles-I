#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string input;
    cin>>input;
    transform(input.begin(),input.end(),input.begin(),::toupper);
    cout<<input<<endl;
    return 0;
}