#include<stdio.h>

int main()
{
    char stng[]={'P','r','e','r','i','t',' ','K','u','m','a','r',' ','J','a','i','n','\0'};
    char stng1[18]="Prerit Kumar Jain";
    char stng2[100];
    char stng3[100];
    scanf("%s",&stng2);
    gets(stng3);
    printf("Using printf stng= %s\n",stng);
    printf("Using printf stng1= %s\n",stng1);
    printf("Using printf and scanf stng2= %s\n",stng2);
    printf("Using printf stng3= %s\n",stng3);
    printf("Using puts: \n");
    puts(stng);
    puts(stng1);
    puts(stng2);
    return 0;
}