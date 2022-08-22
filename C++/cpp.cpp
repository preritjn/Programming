#include <iostream>
using namespace std;

int main() {
	int a,b,i;
	cin>>a;
    cin>>b;
	
	if(a<b)
	{
	    for(i=1;i<=a;i++)
	    {
	        if(a%i==0 && b%i==0)
	        {
	            a=a/i;
	            b=b/i;
	        }
	    }
	    cout<<b;
	}
	else if(a>b)
	{
	    for(i=1;i<=b;i++)
	    {
	        if(a%i==0 && b%i==0)
	        {
	            a=a/i;
	            b=b/i;
	        }
	    }
	    cout<<a;
	}
	else
	cout<<1;
	return 0;
}
