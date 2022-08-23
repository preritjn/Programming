#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a year: ";
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        cout << "This is a leap year" << endl;
    else
        cout << "This is not a leap year" << endl;
    cout << "Leap year till 2020 are:" << endl;
    for (int i = n; i <= 2020; i++)
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            cout << i << endl;
}