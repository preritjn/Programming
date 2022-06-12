#include<stdio.h>
#include<string.h>

int main()
{
    char stng[100],stng1[100];
    printf("Enter 1st String : ");
    gets(stng);
    printf("Enter 2nd String : ");
    gets(stng1);
    printf("The length of stings are %d and %d\n",strlen(stng),strlen(stng1));
    printf("The combination of stings is %s\n",strcat(stng,stng1)); //string combine hoke stng me save ho ja rha hai
    printf("The reverse of stings are %s and %s\n",strrev(stng),strrev(stng1));    
    return 0;
}