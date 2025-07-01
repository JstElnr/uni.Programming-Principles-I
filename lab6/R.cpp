#include <iostream>
using namespace std;
int main() {
    char letter;
    cin>>letter;
    if(letter>='a'&&letter<='z'){
        letter-=32;
    }
    cout<<letter<<endl;
    return 0;
}