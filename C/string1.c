#include<stdio.h>
#include<string.h>

int main()
{
    char stng[100],stng1[100],stng2[100],stng3[100];
    printf("Enter your First name : ");
    gets(stng);
    printf("Enter your Middle name : ");
    gets(stng1);
    printf("Enter your Last name : ");
    gets(stng2);
    // strcpy(stng3,strcat(stng,stng1));
    strcat(stng,stng1);
    puts(strcat(stng,stng2));
    return 0;
}