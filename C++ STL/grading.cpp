#include<bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> v;
    for(int i = 0;i<grades.size();i++) {
        if(grades[i] % 5 >= 3 && grades[i]>=38) {
            grades[i] += 5-grades[i]%5;
            v.push_back(grades[i]);
        }
        else
            v.push_back(grades[i]);
    }
    return v;
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n; i++)
        cin>>v[i];
    gradingStudents(v);
}