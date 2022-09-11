#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n1,x,n2;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int> m;
        vector <int> v;
        cin>>n1;
        for(i=0;i<n1;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        cin>>n2;
        for(i=0;i<n2;i++)
        {
            cin>>x;
            m[x]++;            
        }
        
        
        for(i=0;i<n1;i++)
        {
            auto it=m.find(v[i]);
            if(it ==m.end())
            cout<<v[i]<<" ";
        }
    }
    return 0;
}