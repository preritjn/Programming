#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i=0,sum=0;
    cin>>s;
    while(i<15)
    {
        if(s[i]=='I')
        {
            if(s[i+1]=='V')
            {
                sum+=5;
                i+=2;
                continue;
            }
            else if(s[i+1]=='X')
            {
                sum+=9;
                i+=2;
                continue;
            }
            else 
                sum+=1;
        }
        if(s[i]=='X')
        {
            if(s[i+1]=='L')
            {
                sum+=40;
                i+=2;
                continue;
            }
            else if(s[i+1]=='C')
            {
                sum+=90;
                i+=2;
                continue;
            }
            else
                sum+=10;
        }
        if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {
                sum+=400;
                i+=2;
                continue;
            }
            else if(s[i+1]=='M')
            {
                sum+=900;
                i+=2;
                continue;
            }
            else
                sum+=100;
        }
        if(s[i]=='V')
            sum+=5;
        if(s[i]=='L')
            sum+=50;
        if(s[i]=='D')
            sum+=500;
        if(s[i]=='M')
            sum+=1000;
        i++;        
    }
    cout<<sum;
    return 0;
}