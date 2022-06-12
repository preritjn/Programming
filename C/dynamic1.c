#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, eid;
    char *ptr;
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the length of your E-Id : ");
        scanf("%d", &eid);
        ptr = (char *)calloc(eid, sizeof(char));
        printf("Enter your E-Id : ");
        scanf("%s", ptr);
        printf("The E-Id of employee %d is ", i);
        printf("%s", ptr);
        printf("\n");
        free(ptr);
    }
    return 0;
}