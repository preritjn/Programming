#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n, n1 = "";
    int i = 0, j = 0, l;
    cin >> n;
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    l = n.length();
    while (l != 0)
    {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'y')
            i++;
        else
        {
            n1.append(".");
            n1.push_back(n[i]);            
            i++;
        }
        l--;
    }
    cout << n1;
    return 0;
}