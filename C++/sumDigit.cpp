#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,ld;
    cout<<"Enter a number : ";
    cin>>n;
    while (n!=0)
    {
        ld=n%10;
        sum+=ld;
        n=n/10;
    }
    cout<<"The sum is "<<sum;
    return 0;
}