/6*-+//Binary search using recursion
#include<stdio.h>

int search(int arr[], int low, int high, int key){
    if(low<=high){
        int mid = (low + high)/2;
        if(key==arr[mid])
            return mid;
        else if(key < arr[mid])
            search(arr, low, mid-1, key);
        else
            search(arr, mid+1, high, key);
    }
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
    if(search(a, 0, n-1, k)!=-1)
        printf("Index of element is: %d\n", search(a, 0, n-1, k));
    else
        printf("Element not found\n");
    return 0;
}