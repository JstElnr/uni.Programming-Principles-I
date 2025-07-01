#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string normalize(const string& word) {
    string normalized;
    for (char c:word) {
        if(tolower(c) == 'b' || tolower(c) == 'p') normalized+='b';
        else if (tolower(c) == 'i' || tolower(c) == 'e') normalized+='i';
        else normalized+=tolower(c);
    }
    return normalized;
}
bool areSimilar(const string& word1, const string& word2) {
    return normalize(word1)==normalize(word2);
}
int main(){
    int T;
    cin>>T;
    cin.ignore();
    for (int i=0;i<T;++i){
        string word1,word2;
        cin>>word1>>word2;
        if(areSimilar(word1,word2)) {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}