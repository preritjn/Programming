#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n],b[n];

    cout<<"Enter first number: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter second number: ";
    for(int i=0;i<n;i++)
        cin>>b[i];

	//Finding the 1's complement of b
	for(int i = 0; i < n; i++){
		if(b[i] == 1)
			b[i] = 0;
		else
			b[i] = 1;
	}

    int carry = 0;						
	for(int i = n - 1; i >= 0; i--){
		a[i] = a[i] + b[i] + carry;
		if(a[i] == 2){
			a[i] = 0;
			carry = 1;
        }
		else if(a[i] == 3){
			a[i] = 1;
			carry = 1;
        }
		else
			carry = 0;
    }

    if(carry==1){
        for(int i=n-1; i>=0; i--){
            if(a[i] == 0){
			    a[i] = 1;
			    break;
            }
		    else
			    a[i] = 0;
        }
        cout <<"Difference: ";
        for(int i = 0; i < n; i++){
            cout<<a[i];	
        }
	}

    else {			
		//1's complement of the result	
		for(int i = 0; i < n; i++)		
			if(a[i] == 1)
				a[i] = 0;
			else
				a[i] = 1;
		cout <<"Difference: -";		
		for(int i = 0; i < n; i++)
			cout << a[i];
    }
    return 0;
}