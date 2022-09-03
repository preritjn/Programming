#include<bits/stdc++.h>

using namespace std;

void printVec(vector<pair<int,int>> &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;;
    cout<<endl;

}

int main()
{
    vector<pair<int,int>> v;
    printVec(v);
    int n,x,y;
    cin>>n;
    while(n)
    {
        cin>>x>>y;
        v.push_back({x,y});
        n--;
    }
    printVec(v);
    return 0;
}