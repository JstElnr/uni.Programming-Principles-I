#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<string, set<int>> attendance;
    string name;
    int day;
    for (int i = 0; i < n; ++i) {
        cin >> name >> day;
        attendance[name].insert(day);
    }
    for (const auto &entry : attendance) {
        cou<< entry.first << " ";
        if (entry.second.size() >= 3) {
            cout<<"+1" << endl;
        } else {
            cout<<"NO BONUS" << endl;
        }
    }
    return 0;
}