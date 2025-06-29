#include <iostream>
using namespace std;
int main(){
    string dish;
    cin >> dish;
    int ascii=0;
    for (char c : dish) {
    ascii+= static_cast<int>(c);
    }
    if(ascii>300) {
    cout<< "It is tasty!"<<endl;
    } else{
    cout<< "Oh, no!"<<endl;
    }
    return 0;
}