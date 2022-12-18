#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int left(int i) {
    return 2*i+1;
}

int right(int i) {
    return 2*i+2;
}

int parent(int i) {
    return (i-1)/2;
}

void minHeapify(int i,int size) {
    int lt = left(i),rt = right(i),smallest = i;
    if(lt < size && v[lt]<v[smallest])
        smallest = lt;
    if(rt < size && v[rt]<v[smallest])
        smallest = rt;
    if(smallest != i) {
        swap(v[smallest],v[i]);
        minHeapify(smallest,size);
    }
}

int main() {
    int size,capacity;
    cout<<"Enter size and capacity : ";
    cin>>size>>capacity;
    for(int i = 0;i<size;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    minHeapify(0,size);
    for(int i=0;i<size;i++)
        cout<<v[i]<<" ";
    return 0;
}