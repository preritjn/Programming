#include <bits/stdc++.h>

using namespace std;
int main()
{
    pair<int, string> a;
    a = make_pair(11, "Prerit");
    cout << a.first << " " << a.second << endl;
    a = {011, "Prerit Kumar Jain"};
    cout << a.first << " " << a.second << endl;
    pair<int, string> a1;
    cin >> a1.first >> a1.second;
    cout << a1.first << " " << a1.second << endl;

    // array elements swapping
    pair<int, int> p[4];
    p[0] = make_pair(1, 2);
    p[1] = make_pair(2, 3);
    p[2] = make_pair(3, 4);
    p[3] = make_pair(4, 5);
    cout << "Before Swapping\n";
    for (int i = 0; i < 4; i++)
        cout << p[i].first << " " << p[i].second << endl;
    swap(p[0], p[2]);
    swap(p[1], p[3]);
    cout << "After Swapping\n";
    for (int i = 0; i < 4; i++)
        cout << p[i].first << " " << p[i].second << endl;
    return 0;
}