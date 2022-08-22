#include <iostream>
using namespace std;

int main() {
	int t,a,b,i;
	cin>>t;
	
	for(i=1;i<=t;i++)
	{
	    cin>>a>>b;

	    if((a/b)%2==0 && a%b==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
