#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;
    unordered_map<string, pair<int, int>> student_data;
    for (int i = 0; i < n; ++i) {
        string name;
        int gpa;
        cin>>name>>gpa;
        student_data[name].first+=gpa;
        student_data[name].second+= 1;
    }
    vector<pair<string, pair<int, int>>> students(student_data.begin(), student_data.end());
    sort(students.begin(), students.end(), [](const auto& a, const auto& b) {
    return a.first < b.first;
    });
    for (const auto& student : students) {
        double avg_gpa = static_cast<double>(student.second.first) / student.second.second;
        cout<<student.first << ": " << fixed << setprecision(3) << avg_gpa << endl;
    }
    return 0;
}