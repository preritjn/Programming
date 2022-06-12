#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int id;
    float marks;
} s1, s2, s3;
// struct student s1,s2,s3;
void printinfo()
{
    printf("The informations of s1's are :\n");
    printf("Name : %s\n",s1.name);
    printf("Id : %d\n",s1.id);
    printf("Marks : %f\n",s1.marks);
    printf("The informations of s2's are :\n");
    printf("Name : %s\n",s2.name);
    printf("Id : %d\n",s2.id);
    printf("Marks : %f\n",s2.marks);
    printf("The informations of s3's are :\n");
    printf("Name : %s\n",s3.name);
    printf("Id : %d\n",s3.id);
    printf("Marks : %f\n",s3.marks);
}

int main()
{
    // struct student s1,s2,s3;
    printf("Enter the student's Name : ");
    gets(s1.name);
    printf("Enter the student's Name : ");
    gets(s2.name);
    printf("Enter the student's Name : ");
    gets(s3.name);
    s1.id=1;
    s2.id=2;
    s3.id=3;
    s1.marks=98;
    s2.marks=92;
    s3.marks=89;
    printinfo();
    return 0;
}