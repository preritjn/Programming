#include<stdio.h>

int main()
{
    int i=0,j=0;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=0;j<i;j++)
        printf("*");
    }
    for(i=5;i>0;i--)
    {
        printf("\n");
        for(j=i;j>0;j--)
        printf("*");
    }
    return 0;
}
    