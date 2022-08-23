#include <iostream>
using namespace std;

int main()
{
    int n, rem, sum = 0;
    cout << "Enter any number: ";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem);
        n = n / 10;
    }
    cout << "Sum of square of digits is " << sum;
    return 0;
}