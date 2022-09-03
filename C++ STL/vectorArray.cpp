#include<bits/stdc++.h>

using namespace std;

void printVec(vector<int> &v)
{
    cout<<"Size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
}

int main()
{
    int N,n,i,j,x;
    cin>>N;
    vector<int> v[N];
    for(i=0;i<N;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(i=0;i<N;i++)
    printVec(v[i]);    
    return 0;
}