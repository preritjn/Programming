#include <iostream>
using namespace std;

void recur(int i,int n) {
    if(i>n)
        return;
    recur(i+1,n);
    cout<<i<<" ";
}

int main() {
    int n;
    cin>>n;
    recur(1,n);
    return 0;
}