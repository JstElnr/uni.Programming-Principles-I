#include <iostream>
#include <set>
#include <string>
int main() {
    int n;
    std::cin>>n;
    std::set<std::string> surnames;
    for (int i =0;i< n;++i) {
        std::string surname;
        std::cin>> surname;
        surnames.insert(surname);
    }
    std::cout<<surnames.size()<< std::endl;
    return 0;
}