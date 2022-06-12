#include<stdio.h>

int main()
{
    int ip,ip1,ip2,i=0,j=0;;
    printf("================================\n");
    printf("        Types of Pattens        \n");
    printf("1.Triangular Star Patten\n");
    printf("2.Reverse Triangular Star Patten\n");
    printf("================================\n");
    printf("Enter the patten number you want to print ");
    scanf("%d",&ip);
    printf("Enter the number rows to which you want to print ");
    scanf("%d",&ip2);
    if(ip==1)
    for(i=1;i<=ip2;i++)
    {
        printf("\n");
        for(j=0;j<i;j++)
        printf("*");
    }
    else if(ip==2)
    for(i=ip2;i>0;i--)
    {
        printf("\n");
        for(j=i;j>0;j--)
        printf("*");
    }
    else
    {
        printf("You entered wrong number\n");
        printf("Choose again\n");
        main();
    }
    printf("\n");
    printf("Do you want to print new pattern \n");
    printf("If YES press 0 \n");
    printf("If NO press any button\n");
    scanf("%d",&ip1);
    if(ip1==0)
    main();
    return 0;
}    