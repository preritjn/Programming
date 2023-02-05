#include<bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++) 
        cin>>v[i];
    for(int i=0;i<n;i++) {
        if(i==n-1)
            break;
        for(int j=i+1;j<n;j++) {
            int ans = v[i]&v[j];
            if(ans == 0)
                count++;
        }
    }
    cout<<count;
    return 0;
}