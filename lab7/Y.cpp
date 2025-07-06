#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
int main() {
    int num_assistants;
    cin>>num_assistants;
    unordered_map<string, string> student_to_assistant;
    for (int i = 0; i < num_assistants; ++i) {
        string assistant_name;
        int num_students;
        cin>>assistant_name >> num_students;
        for (int j = 0; j < num_students; ++j) {
            string student_name;
            cin>>student_name;
            student_to_assistant[student_name] = assistant_name;
        }
    }
    int num_requests;
    cin>>num_requests;
    for(int i = 0; i < num_requests; ++i) {
        string student_name;
        cin>>student_name;
        if (student_to_assistant.find(student_name) != student_to_assistant.end()) {
        cout<<student_to_assistant[student_name] << endl;
        } else {
        cout<<"F"<<endl;
        }
    }
    return 0;
}