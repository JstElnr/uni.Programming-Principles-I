#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<string, int> tripletToInt = {
    {"ONE", 1}, {"TWO",2},{"THR", 3}, {"FOU", 4},
    {"FIV", 5}, {"SIX", 6}, {"SEV", 7},{"EIG", 8}, {"NIN", 9},{"ZER", 0}
};
unordered_map<int, string> intToTriplet = {
    {1, "ONE"}, {2,"TWO"}, {3, "THR"}, {4, "FOU"},
    {5, "FIV"}, {6,"SIX"}, {7,"SEV"}, {8,"EIG"}, {9,"NIN"}, {0,"ZER"}
};
int stringToInt(const string& str) {
    int result = 0;
    for (size_t i = 0; i < str.length(); i += 3) {
        string triplet = str.substr(i, 3);
        result = result * 10 + tripletToInt[triplet];
    }
    return result;
}
string intToString(int num) {
    if(num==0) return "ZER";
    string result;
    vector<int> digits;
    while(num> 0) {
        digits.push_back(num % 10);
        num/=10;
    }
    for(size_t i = digits.size();i>0;--i){
        result += intToTriplet[digits[i - 1]];
    }
    return result;
}
int calculate(const string& expression) {
    size_t operatorPos = expression.find_first_of("+-*");
    string left = expression.substr(0, operatorPos);
    char op = expression[operatorPos];
    string right = expression.substr(operatorPos + 1);
    int leftValue = stringToInt(left);
    int rightValue = stringToInt(right);
    if(op=='+') return leftValue + rightValue;
    if(op=='-') return leftValue - rightValue;
    if(op=='*') return leftValue * rightValue;
    return 0;
}
int main(){
    string input;
    cin>>input;
    int result=calculate(input);
    string output=intToString(result);
    cout<<output<<endl;
    return 0;
}