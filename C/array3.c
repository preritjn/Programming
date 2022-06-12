#include <stdio.h>

void printarray(int arr[])
{
    int i;
    for (i = 0; i < 10; i++)
        printf("The term %d of array is %d\n", i + 1, arr[i]);
} 

void swap(int arr[])
{
    int temp;
    for(int i=0;i<5;i++)
    {
        temp=arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }
}


int main()
{
    int arr[10], i;
    printf("Enter an array of 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter the term %d of array :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nBefore swaping the terms of array\n");
    printarray(arr);
    swap(arr);
    printf("\nAfter swaping the terms of array\n");
    printarray(arr);
    return 0;
}