#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    unordered_set<string> first_account, second_account;
    string subscription;
    for (int i = 0; i < n; ++i) {
        cin>>subscription;
        first_account.insert(subscription);
    }
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>subscription;
        second_account.insert(subscription);
    }
    vector<string> result;
    for (const auto& s : first_account) {
        if (second_account.find(s) == second_account.end()) {
            result.push_back(s);
        }
    }
    for (const auto& s : second_account) {
        if (first_account.find(s) == first_account.end()) {
        result.push_back(s);
        }
    }
    sort(result.begin(), result.end());
    for (const auto& s : result) {
        cout<<s << endl;
    }
    return 0;
}