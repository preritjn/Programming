// Quick Sort

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high) {
    int i=low,j=high;
    int pivot = arr[low];
    while(i<j) {
        while(pivot >= arr[i] && i <= high-1)
            i++;
        while(pivot < arr[j] && j >= low+1)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr,int low,int high) {
    if(low<high) {
        int pivot = partition(arr,low,high); 
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    quickSort(arr,0,n-1);
    for(auto val : arr)
        cout<<val<<" ";
    return 0;
}