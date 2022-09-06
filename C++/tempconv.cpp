#include <iostream>
using namespace std;

class temp
{
    float f, c;

public:
    void input();
    void cal();
};

void temp ::input()
{
    cout << "Input temperature in Celcius : ";
    cin >> c;
    cout << "Input temperature in Fahrenheit : ";
    cin >> f;
}

void temp ::cal()
{
    int s;
    s = (9.0 / 5.0) * c + 32;
    cout << "Celcius converted to Fahrenheit : " << s << endl;
    s = (5.0 / 9.0) * (f - 32);
    cout << "Fahrenheit converted to Celcius  : " << s << endl;
}

int main()
{
    temp t1;
    t1.input();
    t1.cal();
    return 0;
}