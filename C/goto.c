#include<stdio.h>

int main()
{
    int i,j,num;
    for(i=1;i<=8;i++)
    for(j=1;j<=8;j++)
    {
        printf("1.Enter a number\n");
        printf("2.Enter 0 to exit ");
        scanf("%d", &num);
        if(num==0)
        goto end;
    }
    end:
    printf("You had chose to exit");
    return 0;    
}