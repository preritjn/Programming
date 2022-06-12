#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Enter the number ");
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("The values of %d, %d of element of the array are %d\n", i, j, a[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}