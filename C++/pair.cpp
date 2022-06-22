#include <iostream>

using namespace std;
int main()
{
    pair<int, string> a;
    a = make_pair(11, "Prerit");
    cout << a.first << " " << a.second;
    a = {011, "Prerit Kumar Jain"};
    cout << a.first << " " << a.second;

    return 0;
}
