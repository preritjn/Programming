#include<stdio.h>
#include<string.h>

union student
{
    int id;
    float marks;
    char name[40];
}s1;

int main()
{
    s1.id=1;
    s1.marks=85;
    strcpy(s1.name,"Prerit Kumar Jain");

    printf("The name of the student is : %s\n",s1.name);
    printf("The id of the student is : %d\n",s1.id);
    printf("The marks of the student is : %f\n",s1.marks);
}