#include <bits/stdc++.h>

using namespace std;
unordered_map<char, int> m = {{'[', -3}, {'{', -2}, {'(', -1}, {')', 1}, {'}', 2}, {']', 3}};
string isBalanced(string &s)
{
    stack<char> st;
    for (char val : s)
    {
        if (m[val] < 0)
            st.push(val);
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (m[top] + m[val] != 0)
                return "NO";
        }
    }
    if (st.empty())
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s);
    }
    return 0;
}
