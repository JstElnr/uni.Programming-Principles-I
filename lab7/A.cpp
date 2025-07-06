#include<iostream>
#include<vector>
using namespace std;

int findMissingSKU(vector<int>& numbers) {
    int n=numbers.size();
    int total_sum=n*(n + 1)/2;
    int actual_sum=0;
    for(int num : numbers) {
    actual_sum+=num;
    }
    return total_sum - actual_sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i){
        cin>>numbers[i];
    }
    cout<<findMissingSKU(numbers)<< endl;
    return 0;
}