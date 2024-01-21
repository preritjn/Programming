#include<bits/stdc++.h>
using namespace std;

void sub_sequence(vector<int> v, int i, vector<int> &ans) {
    if(i==v.size()) {
        for(auto x:ans) {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(v[i]);
    sub_sequence(v,i+1,ans);
    ans.pop_back();
    sub_sequence(v,i+1,ans);
}

int main() {
    vector<int> v;
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> ans;
    sub_sequence(v,0,ans);
    return 0;
}