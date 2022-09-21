#include<bits/stdc++.h>

using namespace std;

int main() {
    unordered_set<string> s;
    int n;
    cin>>n;
    while(n--) {
        string a;
        cin>>a;
        s.insert(a);
    }
    int q;
    cin>>q;
    while(q--) {
        string str;
        cin>>str;
        if(s.find(str)==s.end())
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}