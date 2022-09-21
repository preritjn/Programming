#include<bits/stdc++.h>

using namespace std;

int main() {
    map<pair<string,string>,vector<int>> m;
    int t;
    cin>>t;
    while(t--) { 
        string fn,ln;
        int n;
        cin>>fn>>ln>>n;
        while(n--) {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
        for(auto &pr : m) {
            auto &fullName=pr.first;
            auto &list=pr.second;

            cout<<fullName.first<<" "<<fullName.second<<endl;
            cout<<list.size()<<endl;
            for(int i=0;i<list.size();i++)
                cout<<list[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}