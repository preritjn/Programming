#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,6};    
    for(auto i=0; i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
     
    for(auto &val : v)
        cout<<val<<" ";
    return 0;
}