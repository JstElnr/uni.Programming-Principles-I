#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string email;
        getline(cin, email);
        if (email.size() >= 10 && email.substr(email.size() - 10) == "@gmail.com") {
            string login = email.substr(0, email.size() - 10);
            cout << login << endl;
        }
    }
    return 0;
}
#include<iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string email;
        getline(cin, email);
        if (email.size() >= 10 && email.substr(email.size() - 10) == "@gmail.com") {
            string login = email.substr(0, email.size() - 10);
            cout<<login<< endl;
        }
    }
    return 0;
}