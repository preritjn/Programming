#include <stdio.h>

int main()
{
    int a = 76;
    int *p = &a;
    // int *w=NULL;
    printf("The address of the pointer to a is %p\n", &p);
    printf("The address of the pointer to a is %x\n", &p);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", p);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", p);
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);
    return 0;
}