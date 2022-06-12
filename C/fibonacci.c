#include<stdio.h>

int main()
{
    int a=0,b=1,c,i,ip;
    printf("Enter the term number ");
    scanf("%d",&ip);
    printf("The fibonacci series upto term %d is ",ip);
    printf("%d, %d, ",a,b);
    for(i=1;i<=ip;i++)
    {
        c=a+b;
        a=b;
        b=c;
        // b=a+b;
        // a=b-a;
        printf("%d, ",c);
    }
}