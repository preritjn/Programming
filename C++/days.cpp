#include <iostream>
using namespace std;

int main()
{
    int days, year = 0, month = 0;
    cout << "Enter number of days: ";
    cin >> days;
    if (days >= 365)
    {
        year = days / 365;
        days = days % 365;
    }
    if (days >= 30)
    {
        month = days / 30;
        days = days % 30;
    }
    cout << "Year: " << year << endl
         << "Month: " << month << endl
         << "Day: " << days << endl;
    return 0;
}