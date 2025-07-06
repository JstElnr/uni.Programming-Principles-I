#include<iostream>
#include<set>
#include<string>
#include<cctype>
bool isStrongPassword(const std::string& password) {
    bool hasLower=false,hasUpper=false, hasDigit = false;
    for (char ch: password) {
        if (std::islower(ch)) hasLower= true;
        if (std::isupper(ch)) hasUpper = true;
        if (std::isdigit(ch)) hasDigit = true;
        if (hasLower && hasUpper && hasDigit) return true;
    }
    return false;
}
int main() {
    int n;
    std::cin>>n;
    std::set<std::string>strongPasswords;
    for (int i =0;i <n;++i) {
        std::string password;
        std::cin>>password;
        if (isStrongPassword(password)) {
            strongPasswords.insert(password);
        }
    }
    std::cout<<strongPasswords.size()<< std::endl;
    for (const std::string& password :strongPasswords) {
        std::cout<< password << std::endl;
    }
    return 0;
}