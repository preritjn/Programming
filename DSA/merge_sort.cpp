// Merge sort

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high) {
    vector<int> temp;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high) {
        if(arr[i]<arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++) 
        arr[i+low] = temp[i];
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low>=high)
        return;
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}