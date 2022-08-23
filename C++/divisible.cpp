#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 5 == 0)
        cout << "Number is divisible by 5";
    else
        cout << "Number is not divisible by 5";
    return 0;
}