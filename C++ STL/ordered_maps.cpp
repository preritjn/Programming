#include<bits/stdc++.h>

using namespace std;

void print(map<int,string> &m)
{
    cout<<"Size : "<<m.size()<<endl;
    for(auto val : m)
    cout<<val.first<<" "<<val.second<<endl;
}

int main()
{
    map<int,string> m;
    m[1]="hello";  // time complexity of 0(log(n))
    m[5]="bitches";
    m[3]="there";
    m[4]="my";
    // m[6]; time complexity of 0(log(n))
    print(m);
    auto it =m.find(5);   //find returns an iterator
    if(it==m.end())
    cout<<"No value\n";
    else
    cout<<it->first<<" "<<it->second<<endl; // time complexity of 0(log(n))
    it=m.find(3);
    m.erase(it); //time complexity of 0(log(n))
    // m.clear(); clear the complete map
    print(m);
    return 0;
}