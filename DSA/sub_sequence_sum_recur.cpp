#include<bits/stdc++.h>
using namespace std;

void subSequenceSum(vector<vector<int>> &ans,int sum,vector<int> &v,vector<int> arr,int i,int k) {
    if(i == arr.size()) {
        if(sum == k)
            ans.push_back(v);
        return;
    }
    v.push_back(arr[i]);
    sum += arr[i];
    subSequenceSum(ans,sum,v,arr,i+1,k);
    v.pop_back();
    sum -= arr[i];
    subSequenceSum(ans,sum,v,arr,i+1,k);
}

int main() {
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    vector<vector<int>> ans;
    vector<int> vr;
    subSequenceSum(ans,0,vr,v,0,k);
    for(auto val: ans) {
        for(auto v : val)
            cout<<v<<" ";
        cout<<endl;
    }
    return 0;
}