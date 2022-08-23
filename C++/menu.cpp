#include <iostream>
using namespace std;

int main()
{
    int n, i, fact = 1, c = 0;
    cout << "1. Find Factorial of a number\n";
    cout << "2. Check a no. is prime or not\n";
    cout << "3. Check a no. is divisible by any odd number\n";
    cout << "Enter 1 or 2 or 3 : ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter a number : ";
        cin >> n;
        for (i = 1; i <= n; i++)
            fact *= i;
        cout << "The factorial of " << n << " is " << fact;
        break;

    case 2:
        cout << "Enter a number : ";
        cin >> n;
        for (i = 2; i < n; i++)
            if (n % i == 0)
                c++;
        if (c == 0)
            cout << "The number " << n << " is Prime";
        else
            cout << "The number " << n << " is not Prime";
        break;

    case 3:
        c = 0;
        cout << "Enter a number : ";
        cin >> n;
        for (i = 3; i < n; i += 2)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 0)
            cout << "Not divisible by any odd number";
        else
            cout << "Divisible by odd number";

        break;
    default:
        cout << "You entered a wrong input";
        break;
    }
    return 0;
}