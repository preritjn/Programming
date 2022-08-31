#include <iostream>
using namespace std;

int main() {
	int t,i,n,j,c=0,c1=0,k;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    cin>>n;
	    int arr[n];
	    for(j=0;j<n;j++)
	    cin>>arr[j];
	    if(n%2!=0)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
	return 0;
}