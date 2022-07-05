#include <stdio.h>
#include <string.h>

struct employee
{
    char name[15];
    int id;
    float salary;
    struct date
    {
        int day, month, year;
    } s2;
} s1;

int main()
{
    printf("Enter employee name : ");
    gets(s1.name);
    printf("Enter employee id : ");
    scanf("%d",&s1.id);
    printf("Enter employee salary : ");
    scanf("%f",&s1.salary);
    printf("Enter your birthdate : \n");
    printf("Enter day: ");
    scanf("%d", &s1.s2.day);
    printf("Enter month: ");
    scanf("%d", &s1.s2.month);
    printf("Enter year: ");
    scanf("%d", &s1.s2.year);

    printf("The name of the employee is : %s\n",s1.name);
    printf("The id of the employee is : %d\n",s1.id);
    printf("The salary of the employee is : %f\n",s1.salary);
    printf("The Date of birth of the employee is : %d/%d/%d\n",s1.s2.day,s1.s2.month,s1.s2.year);
    return 0;
}