#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int i = 0, s;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    for(i=0;i<a.length();i++)
    {
        if (b[i] - a[i] == 0)
            s = 0;
        else if ((a[i] - b[i] > 0))
        {
            s = 1;
            break;
        }
        else
        {
            s = -1;
            break;
        }
    }
    cout << s;
    return 0;
}