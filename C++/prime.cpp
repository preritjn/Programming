#include<iostream>

using namespace std;

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    return false;
    return true;
}

int main()
{
    int n,i;
    cout<<"Enter a number : ";
    cin>>n;
    if(isPrime(n))
    cout<<"The entered number is prime number";
    else
    cout<<"The entered number is not a prime number";
    return 0;
}