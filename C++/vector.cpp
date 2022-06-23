#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> v; // dynamic array
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
}