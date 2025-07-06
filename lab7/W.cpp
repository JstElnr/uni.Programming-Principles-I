#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
struct Hunter {
    string ability;
    int max_bugs;
    int caught_bugs;
};
int main() {
    int n; 
    cin>>n;
    vector<pair<string, string>> bugs(n);
    for (int i = 0; i < n; ++i) {
        cin>> bugs[i].first >> bugs[i].second;
    }
    int m;
    cin >> m;
    unordered_map<string, Hunter> hunters;
    for (int i = 0; i < m; ++i) {
        string name, ability;
        int max_bugs;
        cin >> name >> ability >> max_bugs;
        hunters[name] = {ability, max_bugs, 0};
    }
    int remaining_bugs = n;
    for (auto& bug : bugs) {
        bool caught = false;
        for (auto& hunter_pair : hunters) {
            Hunter& hunter = hunter_pair.second;
            if (hunter.ability == bug.second && hunter.caught_bugs < hunter.max_bugs) {
                hunter.caught_bugs++;
                remaining_bugs--;
                caught = true;
                break;
            }
        }
        if (!caught) {
            continue;
        }
    }
    cout<< "Bugs left: " << remaining_bugs << endl;
    return 0;
}