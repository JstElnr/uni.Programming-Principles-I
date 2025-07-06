#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> strings(n);
    for(int i= 0;i< n; ++i) {
        cin >> strings[i];
    }
    set<char> commonChars(strings[0].begin(), strings[0].end());
    for (int i = 1; i < n; ++i) {
        set<char> currentChars(strings[i].begin(), strings[i].end());
        set<char> intersection;
        for (char ch : commonChars) {
            if(currentChars.find(ch) != currentChars.end()) {
            intersection.insert(ch);
            }
        }
        commonChars = intersection;
    }
    if (commonChars.empty()) {
        cout<< "NO COMMON CHARACTERS"<< endl;
    } else {
        for (char ch : commonChars) {
            cout<< ch << " ";
        }
        cout<<endl;
    }
    return 0;
}