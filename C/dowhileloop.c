#include<stdio.h>

int main()
{
    int ip,num=0;
    printf("Enter the no. ");
    scanf("%d",&ip);
    do
    {       
        num+=1;
        printf("%d\n",num);
    } while (ip>num);
    
}