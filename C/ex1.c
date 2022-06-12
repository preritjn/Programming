#include<stdio.h>

int main()
{
    int ip;
    printf("The Table of ");
    scanf("%d", &ip);
    printf("%d X 1 = %d\n",ip,ip*1);
    printf("%d X 2 = %d\n",ip,ip*2);
    printf("%d X 3 = %d\n",ip,ip*3);
    printf("%d X 4 = %d\n",ip,ip*4);
    printf("%d X 5 = %d\n",ip,ip*5);
    printf("%d X 6 = %d\n",ip,ip*6);
    printf("%d X 7 = %d\n",ip,ip*7);
    printf("%d X 8 = %d\n",ip,ip*8);
    printf("%d X 9 = %d\n",ip,ip*9);
    printf("%d X 10 = %d\n",ip,ip*10);


    for(int i=1; i<=10; i++)
    printf("%d X %d = %d\n",ip,i,ip*i);
    return 0;
}