//first 1 in a string 
#include<stdio.h>
#include<string.h>

int search(char s[], int low, int end) {
    if(low<=end) {
        int mid = (low + end)/2;
        if(s[mid]=='1' && (s[mid-1]=='0' || mid-1==-1))
            return mid;
        else if(s[mid]=='1')
            search(s, low, mid-1);
        else
            search(s, mid+1, end);
    }
    else
        return -1;
}

int main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char s[n];
    printf("Enter the string: ");
    scanf("%s", &s);
    
    if(search(s, 0, n-1)!=-1)
        printf("First 1 in given string is in %dth index\n", search(s, 0, n-1)+1);
    else
        printf("String doesn't contain any 1\n");
    return 0;
}