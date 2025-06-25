#include <iostream>
#include <string>
int main() {
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Welcome " << name << std::endl;
    return 0;
}