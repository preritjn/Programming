#include<stdio.h>
int sum(int a,int b);
void starnumber(int a)  // with argument without return function
{
    for(int i=1;i<=a;i++)
    printf("%c", '*');
}
int takenumber() // without argument with return
{
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    return i;
}
int main()
{
    int a,b,c,d;
    a=10;
    b=75;
    c=sum(a,b);
    starnumber(a);
    d=takenumber();
    printf("The entered number is %d\n",d);
    printf("The sum is %d\n", c);
    return 0;
}
int sum(int a,int b)  // with argument with return function
{
   return a+b; 
}