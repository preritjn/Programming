#include<stdio.h>

int main()
{
    int ip;
    printf("Enter a positive integer number ");
    scanf("%d", &ip);
    if(ip>=0)
    {
        printf("The number entered by the user is %d\n",ip);
        if(ip%2==0 && ip!=0)
        printf("The entered number %d is an even number", ip);
        else if(ip==0)
        printf("The entered number is zero");
        else
        printf("The entered number %d is an odd number", ip);
    }
    else
    printf("The entered number %d is not postive integer", ip);
    return 0;
}