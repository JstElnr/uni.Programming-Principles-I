#include <iostream>
#include <sstream>
using namespace std;
bool contains(const string& word) {
    for (char c : word) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}
int main(){
    string sentence;
    getline(cin,sentence);  
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        if (!contains(word)) {
            cout<<word<<endl;
        }
    }
    return 0;
}