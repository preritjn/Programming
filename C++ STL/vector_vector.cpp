#include<bits/stdc++.h>

using namespace std;

void printVec(vector<int> v)
{
    cout<<"Size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<vector<int>> v;
    int N,i,j,n,x;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>n;
        vector<int> temp;
        for(j=0;j<n;j++)
        {
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }    
    for(i=0;i<v.size();i++)
    printVec(v[i]);
    return 0;
}