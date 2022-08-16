#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,copy,ld;
    cout<<"Enter a number : ";
    cin>>n;
    copy=n;
    while (n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(copy==rev)
    cout<<"The entered number is Palindrome";
    else
    cout<<"The entered number is Not Palindrome";
    return 0;
}