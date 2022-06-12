#include<stdio.h>
#include<math.h>

int main()
{
    int p, b, x, h;
    printf("Enter the value of p,b");
    scanf("%d %d",&p,&b);
    // printf("The value of p is : ");
    // scanf("%d",&p);
    // printf("The value of b is : ");
    // scanf("%d", &b);
    x=p*p+b*b;
    h=sqrt(x);
    printf("The hypotenuse is : %d", h);
    return 0;
}