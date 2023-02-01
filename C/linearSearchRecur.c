//linear search using recursion
#include<stdio.h>

int search(int arr[], int size, int i, int key){
    if(i<size)
        if(key==arr[i])
            return i;
        else
            search(arr, size, i+1, key);
    else
        return -1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int k;
    printf("Enter the element you want to search: ");
    scanf("%d", &k);
    if(search(a, n, 0, k)!=-1)
        printf("Index of element is: %d", search(a, n, 0, k));
    else
        printf("Element not found");
    return 0;
}