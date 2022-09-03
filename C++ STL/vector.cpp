#include <bits/stdc++.h>

using namespace std;

//push_back add element at last index
// pop_back remove element at last index
// both are 0(1) time complexity
// pass reference rather than copy to reduce time compelxity
// initializing vector with another vector has time complexity of 0(n)

void printVec(vector<int> &v)
{
    cout << "Size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v.push_back(2);
}

int main()
{
    vector<int> v; // dynamic array
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        printVec(v);
    }
    v.push_back(6);
    v.push_back(9);
    vector<int> v2 =v;
    printVec(v);
    printVec(v);
    v2.push_back(42);
    printVec(v2);
    printVec(v2);    
    return 0;   
}