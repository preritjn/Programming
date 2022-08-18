#include<bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin>>n;
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    cout<<n;
    return 0;
}