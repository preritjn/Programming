#include <bits/stdc++.h>

using namespace std;

void printSet(set<string> &s)
{
    for (auto &val : s)
        cout << val << endl;
    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << endl;
}

int main()
{
    set<string> s;
    s.insert("abc"); // 0(log(n))
    s.insert("bcd");
    s.insert("cde");
    s.insert("abc"); //set stores only unique elements
    auto it = s.find("abc"); // 0(log(n))
    if (it == s.end())
        cout << "No value\n";
    else {
        cout << *it << endl;
        s.erase(it); // s.erase() can take both iterator and value
    }
    printSet(s);
    return 0;
}