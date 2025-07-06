#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int n, m;
    cin>>n;
    vector<string> ingredients(n);
    for (int i = 0; i < n; ++i) {
        cin>> ingredients[i];
    }
    cin>>m;
    map<string, set<string>> pairs;
    string ing1, ing2;
    for (int i = 0; i < m; ++i) {
        cin>>ing1 >> ing2;
        pairs[ing1].insert(ing2);
        pairs[ing2].insert(ing1);
    }
    string start;
    cin>>start;
    set<string> result(pairs[start].begin(), pairs[start].end());
    vector<string> sortedResult(result.begin(), result.end());
    cout<<sortedResult.size() << endl;
    for (const string &ingredient : sortedResult) {
        cout<<ingredient << " ";
    }
    return 0;
}