#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main() {
    int n;  
    cin>>n;
    unordered_map<string, string> document;
    while (n--) {
        string command;
        cin>>command;
        if (command == "set") {
            string key, value;
            cin>>key >> value;
            document[key] = value;  
        } else if (command == "get") {
            string key;
            cin>>key;
            if (document.find(key) != document.end()) {
                cout<< document[key] << endl;
            } else {
                cout<< "KE: no key " << key << " found in the document" << endl;
            }
        }
    }
    return 0;
}