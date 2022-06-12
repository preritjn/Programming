#include <iostream>
#include <cmath>
/*pow(a,b)
sqrt(a)
round()
ceil()       
fmax()
fmin()  */

using namespace std;

int main()
{
    string name;
    int age = 19;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout << "Hello everyone" << endl;
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old." << endl;
    cout << "The length of the string is " << name.length() << endl;
    cout << "The index of K is " << name.find("K", 0) << endl;
    cout << "The middle name is " << name.substr(7, 5) << endl;
    float p = 5.5;
    p++;
    cout << p << endl;
    cout << 10 / 3.0 << endl;
    cout << fmax(2, 5);
    return 0;
}