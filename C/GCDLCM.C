// 4. Write a function to find gcd and lcm of two numbers
#include<stdio.h>
int gcd(int, int);
int lcm(int, int);
int main()
{
 int n1, n2;
 printf("Enter the two numbers : ");
 scanf("%d %d", &n1, &n2);
 printf("Greatest Common Divisor : %d", gcd(n1, n2));
 printf("\nLeast Common Multiple : %d", lcm(n1, n2));
 return 0;
}
int gcd(int a, int b)
{
 if(b == 0)
  return a;
 return gcd(b, a%b);
}
int lcm(int a, int b)
{
 return ((a * b)/gcd(a, b));
}