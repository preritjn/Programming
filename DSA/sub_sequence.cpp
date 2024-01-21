// Print only one sub array whose sum is equal to k
#include<bits/stdc++.h>
using namespace std;

bool subSequence(vector<int> &ds,vector<int> arr,int i,int k,int sum) {
    if(i == arr.size()) {
        if(sum == k) {
            for(auto val : ds) {
                cout<<val<<" ";
            }
            cout<<endl;
            return true;
        }
        else 
            return false;
    }
    ds.push_back(arr[i]);
    sum += arr[i];
    if(subSequence(ds,arr,i+1,k,sum))
        return true;
    ds.pop_back();
    sum -= arr[i];
    if(subSequence(ds,arr,i+1,k,sum))
        return true;
    return false;
}

int main() {
    int n,k;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    vector<int> ds;
    subSequence(ds,v,0,k,0);
    return 0;
}