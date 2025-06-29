#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
unordered_map<string, int> triplet_to_digit = {
    {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4},
    {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8},
    {"NIN", 9}, {"ZER", 0}
};
unordered_map<int, string> digit_to_triplet = {
    {0, "ZER"}, {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"},
    {5, "FIV"}, {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}
};
int convert_to_number(const string& expression) {
    int sum = 0;
    for (size_t i = 0; i < expression.length(); i += 3) {
        string triplet = expression.substr(i, 3);
        sum = sum * 10 + triplet_to_digit[triplet];
    }
    return sum;
}
string convert_to_triplet(int number) {
    string result;
    if (number == 0) {
        return "ZER";
    }
    while(number > 0) {
        int digit = number % 10;
        result = digit_to_triplet[digit] + result;
        number/= 10;
    }
    return result;
}
int main() {
    string input;
    cin>> input;
    size_t plus_pos = input.find('+');
    string first_num = input.substr(0, plus_pos);
    string second_num = input.substr(plus_pos + 1);
    int first_value = convert_to_number(first_num);
    int second_value = convert_to_number(second_num);
    int total = first_value + second_value;
    string result = convert_to_triplet(total);
    cout<< result << endl;
    return 0;
}