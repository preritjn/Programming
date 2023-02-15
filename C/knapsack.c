#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n) {
	if (n == 0 || W == 0)
		return 0;
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else
		return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),knapSack(W, wt, val, n - 1));
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int w[n], val[n];
    printf("Enter the array of weights: ");
    for (int i = 0; i < n; i++) scanf("%d", &w[i]);
    printf("Enter the array of values: ");
    for (int i = 0; i < n; i++) scanf("%d", &val[i]);
    int wt;
    printf("Enter the weight: ");
    scanf("%d", &wt);
    
	printf("%d", knapSack(wt, w, val, n));
	return 0;
}