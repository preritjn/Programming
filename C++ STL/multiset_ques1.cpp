/*Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,multiset<string>> m;
    while(n--) {
        int x;
        string name;
        cin>>name>>x;
        m[x].insert(name);
    }
    auto it=--m.end();
    while(1) {
        auto &sName= it->second;
        auto &marks= it->first;
        for(auto &val : sName)
            cout<<val<<" "<<marks<<endl;
        if(it==m.begin())
            break;
        it--;
    }
    return 0;
}