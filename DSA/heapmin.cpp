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
    return (abs(i-1))/2;
}

void insert(int x,int &size,int &capacity) {
    if(size >= capacity)
        return;
    size++;
    v.push_back(x);
    int i = size-1;
    while(i != 0 && v[parent(i)]>v[i]) {
        swap(v[parent(i)],v[i]);
        i = parent(i);
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
    insert(12,size,capacity);
    for(int i=0;i<size;i++)
        cout<<v[i]<<" ";
    return 0;
}