#include<bits/stdc++.h>
using namespace std;

// here all operation are 0(n)

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    auto min = *min_element(v.begin(),v.end());
    auto max = *max_element(v.begin(),v.end());
    cout<<min<<endl;
    cout<<max<<endl;
    auto sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int x;
    cin>>x;
    auto cnt = count(v.begin(),v.end(),x);
    cout<<cnt<<endl;
    cin>>x;
    auto element =find(v.begin(),v.end(),x);
    if(element==v.end())
        cout<<"Not Found"<<endl;
    else
        cout<<*element<<endl;
    reverse(v.begin(),v.end());
    for(auto val : v)
        cout<<val<<" ";
    cout<<endl;
    return 0;
}