#include<stdio.h>

int main()
{
    int i,age;
    char s[30];
    for(i=0;i<10;i++)
    {
        printf("Enter your name ");
        scanf("%s",&s);
        printf("Enter your age ");
        scanf("%d",&age);
        if(age>20)
        {
        printf("Some error has occured\n");
        break;
        }
        printf("Your Name and Age has been succesfully registered\n");
    }
    //main();
}