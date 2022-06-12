#include<stdio.h>

int main()
{
    int a,m;
    printf("Enter your age ");
    scanf("%d", &a);
    printf("Enter marks obtained ");
    scanf("%d", &m);
    switch(a)
    {
        case 13:
        printf("You are a teenager now\n");
        switch(m)
        {
            case 85:
            printf("Your obtained marks is 85\n");
            break;
            default:
            printf("Your obtained marks is not 85\n");
            break;
        }
        break;
        case 18:
        printf("You are now a young adult\n");
        break;
        case 23:
        printf("You are an adult now\n");
        break;
        default:
        printf("Entered age is not 13, 18 and 23");
    }
    return 0;
}