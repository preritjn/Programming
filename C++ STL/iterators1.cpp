#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    for (auto i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    for (auto &val : v)
        cout << val << " ";
        cout<<endl;

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({2, 3});
    vector<pair<int, int>>::iterator it;

    for (pair<int, int> &val : vp)
    {
        cout << val.first << " " << val.second << endl;
    }

    for (auto &val : vp)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}