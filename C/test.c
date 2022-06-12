#include <stdio.h>

int main() 
{
	int i,a=0,b=1,c,T;
	int arr[30];
	arr[0]=0;
	arr[1]=1;
    scanf("%d",&T);
    int arr1[T];
    for(i=3;i<=30;i++)
    {
        arr[i-1]=a+b;
        a=b;
        b=arr[i-1];
    }
    for(i=0; i<=T-1;i++)
    {
        scanf("%d",&arr1[i]);
        printf("%d\n",arr[arr1[i]]);
    }
	return 0;
}