#include<stdio.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int d= (N+M)/(24*3600);
    printf("%d",d);
    int h=(N+M)/3600;
    printf(" %d",h);
    int m=(N+M)%3600;
    // printf(" %d",m);
    int m1=m/60;
    printf(" %d",m1);
    int s=m%60;
    printf(" %d",s);
    return 0;
}