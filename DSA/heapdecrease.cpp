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

void decreaseKey(int i,int x) {
    v[i]=x;
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
    decreaseKey(3,5);
    for(int i=0;i<size;i++)
        cout<<v[i]<<" ";
    return 0;
}