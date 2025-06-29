#include<iostream>
#include<string>
using namespace std;
int main() {
    char letterToRemove;
    string word;
    cin>> letterToRemove;
    cin>> word;
    for (char c : word) {
        if (c !=letterToRemove) {
            cout<< c;
        }
    }
    cout<<endl;
    return 0;
}