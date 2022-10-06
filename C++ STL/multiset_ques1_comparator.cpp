/*Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!*/

#include<bits/stdc++.h>
using namespace std;

bool swapOrNot(pair<string,int> a,pair<string,int> b) {
    if(a.second!=b.second) {
        if(a.second < b.second) return true;
        return false;
    }
    else {
    if((a.first.compare(b.first)>0)) return true;
    return false;
    }
}

int main() {
    int n;
    cin>>n;
    vector<pair<string,int>> m(n);
    for(int i=0;i<n;i++) {
        cin>>m[i].first>>m[i].second;
    }

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++)
            if(swapOrNot(m[i],m[j]))
                swap(m[i],m[j]);
    }

    for(int i=0;i<n;i++)
        cout<<m[i].first<<" "<<m[i].second<<endl;    
    return 0;
}