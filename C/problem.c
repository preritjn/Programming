#include <stdio.h>

// int main()
// {
//     int i,j,n,p=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             p=p*11;
//         }
//         printf("%d\n",p);
//         p=1;
//     }
// }
int main()
{
    int i = 1, j = 1, n, p=1;
    scanf("%d", &n);
    while (i <= n)
    {
        while(j<=i)
        {
            p=p*11;
            j++;
        }
        printf("%d\n",p);
        i++;
        p=1;
        j=1;
    }
    return 0;
}