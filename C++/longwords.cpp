#include<iostream>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t!=0)
    {
        t--;
        cin>>s;
        if(s.length()<=10)
        cout<<s<<endl;
        else
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
    return 0;
}