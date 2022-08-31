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
	    for(j=0;j<n;j++)
	    {
	        for(k=0;k<n;k++)
	        {
	            if(arr[k]==arr[j])
	            c++;
	        }
	        if(c%2==0 && c!=0)
	        {
	            cout<<"YES\n";
	            break;
	        }
	        else
	        c1++;
	        c=0;
	        if(c1==n  && n%2==0)
	        {
	            cout<<"YES\n";
	            c1=0;
	        }
	        else if(c1==n && n%2!=0)
	        {
	            cout<<"NO\n";
	            c1=0;
	        }
	    }
	}
	return 0;
}