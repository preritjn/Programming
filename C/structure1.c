#include<stdio.h>
#include<string.h>

struct driver
{
    char name[30];
    char dl[17];
    char route[60];
    float km;
};

void info(int n)
{
    struct driver a;
    for(int i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("Enter your details Driver No. %d\n", i);
        printf("Name : ");
        gets(a.name); 
        printf("Driving Licence No. : ");
        gets(a.dl); 
        printf("Route : ");
        gets(a.route);        
        printf("Kilometers Traveled : ");
        scanf("%f", &a.km); 
    }
}

int main()
{
    int n;
    printf("The total number of driver are : ");
    scanf("%d", &n);
    info(n);
    return 0;
}