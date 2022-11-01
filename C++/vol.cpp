#include<iostream>
#include<cmath>
using namespace std;

class Cube {
    int side;
    public :
        Cube();
        void display();
        ~Cube() {};
};

Cube::Cube(){
    cout<<"Enter the side of cube : ";
    cin>>side;
}

void Cube::display() {
    cout<<"The volume of the cube is : "<<pow(side,3);
}

int main() {
    Cube o;
    o.display();
    return 0;
}