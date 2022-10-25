#include<iostream>
using namespace std;

struct Bank {
    string Name,accntType;
    long long accntNumber;
    static double balance;
    public:
        void input();
        void credit();
        void withdraw();
        void balanceCheck();
        void display();
};

double Bank::balance = 10000.0;

void Bank::input() {
    cout<<"Enter Account Holder Name : ";
    cin>>Name;
    cout<<"Enter Account Type : ";
    cin>>accntType;
    cout<<"Enter Account Number : ";
    cin>>accntNumber;
}

void Bank::display() {
    cout<<"Account Holder Name : "<<Name<<endl;
    cout<<"Account Type : "<<accntType<<endl;
    cout<<"Account Number : "<<accntNumber<<endl;
    cout<<"Balance : "<<balance<<endl;
}

void Bank::credit() {
    cout<<"Enter the amount you want to credit : ";
    double amount;
    cin>>amount;
    balance+=amount;
    cout<<"Current Balance : "<<balance<<endl;
}

void Bank::withdraw() {
    cout<<"Enter the amount you want to withdraw : ";
    double amount;
    cin>>amount;
    if(balance >=(amount + 10000))
        balance-=amount;
    else
        cout<<"Cannot withdraw, min balance must be Rs. 10000"<<endl;
    cout<<"Current Balance : "<<balance<<endl;
}

void Bank::balanceCheck() {
    cout<<"Available Balance : "<<balance<<endl;
} 

int main() {
    Bank o;
    o.input();
    o.display();
    while (true)
    {
        cout<<"1. Credit Amount\n2. Withdraw Amount\n3. Check Balance\n4. Exit\n";
        int n;
        cin>>n;
        if(n==4)
            break;
        switch(n) {
            case 1 :
                o.credit();
                break;
            case 2 :
                o.withdraw();
                break;
            case 3 :
                o.balanceCheck();
                break;
            default :
                cout<<"Entered wrong input,Enter again...."<<endl;
        }
    }
    return 0;
}