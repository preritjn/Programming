#include<stdio.h>

int main()
{
    int a,b;
    printf("The value of a is ");
    scanf("%d", &a);
    printf("The value of b is ");
    scanf("%d", &b);
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);  
    printf("%d\n", a&&b);
    printf("%d\n", !(a&&b));  
    printf("%d", a&b);

    return 0;
}