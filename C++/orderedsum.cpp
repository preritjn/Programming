#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char swap;
    cin >> s;
    int i, j, t, tn;
    for (j = 0; j < s.size(); j++)
    {
        if(s.size()==1)
        break;
        for (i = 0; i < s.size() - 2; i++)
            if ((int)s[i] > (int)s[i + 2])
            {
                swap = s[i + 2];
                s[i + 2] = s[i];
                s[i] = swap;
            }
    }
    cout << s;
    return 0;
}