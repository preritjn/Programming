#include<stdio.h>

void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b-*b;    
    return;
}
int main()
{
    int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);   
    printf("The values of a and b are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The values of a and b are %d and %d\n",a,b);
    return 0;
}