#include <bits/stdc++.h>

using namespace std;

void iterpair()
{
    vector<pair<int, int>> v;
    v = {make_pair(1, 2), {2, 3}, {3, 4}, {4, 5}};
    vector<pair<int, int>>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;
    for (it = v.begin(); it != v.end(); it++)
        cout << it->first << " " << it->second << endl;
}

int main()
{
    int i, n, x;
    cin >> n;
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    cout << *(it + 1)<<endl;
    iterpair();
    return 0;
}
