#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    while (i <= 5)
    {
        j = i;
        while (j <= 5)
        {
            printf("%d", j);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}