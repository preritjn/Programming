#include<bits/stdc++.h>
using namespace std;

bool swapOrNot(int a,int b) {
    if(a>b) return true;
    return false;
}

bool swapOrNot(pair<int,int> a,pair<int,int> b) {
    if(a.first!=b.first) {
        if(a>b) return true;
        return false;
    }
    else {
        if(a.second<b.second) return true;
        return false;        
    }
}

int main() {
    int n;
    cin>>n;
    // vector<int> v;
    // for(int i=0;i<n;i++) {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i=0;i<n;i++)
    //     for(int j=i+1;j<n;j++)
    //         if(swapOrNot(v[i],v[j]))
    //             swap(v[i],v[j]);
    
    // for(auto val : v)
    //     cout<<val<<" ";

    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(swapOrNot(v[i],v[j]))
                swap(v[i],v[j]);

    for(auto val : v) 
        cout<<val.first<<" "<<val.second<<endl;
    return 0;
}