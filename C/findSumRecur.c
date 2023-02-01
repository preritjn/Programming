//Finding sum of all elements of array using recursion
#include<stdio.h>

int sum(int arr[], int n, int i) {
    if(i<n)
        return arr[i]+sum(arr, n, ++i);
    else
        return 0;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Sum of all elements of array is: %d\n", sum(a, n, 0));
    return 0;
}