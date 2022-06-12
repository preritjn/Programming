#include <iostream>
using namespace std;
int main()
{
    int n, i, c, count = 0;
    cin >> n;
    int a[n], b[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    c = a[0];
    for (i = 0; i < n; i++)
        if (c >= a[i])
            c = a[i];
    for (i = 0; i < n; i++)
    {
        if (a[i] == c)
            continue;
        while (a[i] > b[i] && c < a[i])
        {
            a[i] = a[i] - b[i];
            if (c <= a[i])
                count++;
            if (c == a[i])
                break;
        }
    }
    if (count != 0)
        cout << count;
    else
        cout << -1;

    return 0;
}