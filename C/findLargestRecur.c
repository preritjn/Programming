//Finding largest element in an array using recursion
#include<stdio.h>

int ans(int arr[], int n, int i, int a){
    if(i<n){
        if(arr[i]>a)
            a=arr[i];
        ans(arr, n, ++i, a);
    }
    else
        return a;
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The largest element is: %d\n", ans(a, n, 0, a[0]));
    return 0;
}