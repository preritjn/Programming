#include<stdio.h>

int factorial(int number)
{
    if(number==0 || number==1)
    return 1;
    else 
    // return (factorial(number));
    return (number*factorial(number-1));
}
int main()
{
    int num;
    printf("Enter the number that you want factorial of ");
    scanf("%d", &num);
    printf("The factorial of number %d is %d",num,factorial(num));
    return 0;
}