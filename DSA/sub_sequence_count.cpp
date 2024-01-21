// Count the number of sub sequneces whose sum is equal to k
#include<bits/stdc++.h>
using namespace std;

int subSequenceCount(vector<int> arr,int i,int sum,int k) {
    if(sum > k)
        return 0;
    if(i==arr.size()) {
        if(sum == k)
            return 1;
        else
            return 0;
    }
    sum += arr[i];
    int left = subSequenceCount(arr,i+1,sum,k);
    sum -= arr[i];
    int right = subSequenceCount(arr,i+1,sum,k);
    return left + right;
}

int main() {
    int n,k;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cin>>k;
    cout<<subSequenceCount(arr,0,0,k);
    return 0;
}