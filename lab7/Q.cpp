#include<iostream>
#include<unordered_map>
#include<map>
#include<set>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int number_of_students;
    cin >> number_of_students;
    float total = 0;
    unordered_map<string, float> student_score;
    for (int i= 0; i < number_of_students; i++) {
        string student_name;
        float score;
        cin>>student_name >> score;
        total+=score;
        student_score[student_name] += score;
    }
    vector<pair<float, string>> answer;
    for (const auto& [name, score] : student_score) {
        answer.emplace_back(score, name);
    }
    sort(answer.begin(),answer.end());
    cout << fixed << setprecision(2);
    for (int i = answer.size() - 1; i >= 0; i--) {
    cout<<answer[i].second << " " 
    << (answer[i].first * 100 / total) << "%" << endl;
    }
    return 0;
}
