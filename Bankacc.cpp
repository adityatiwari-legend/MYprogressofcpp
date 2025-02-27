#include <iostream>
using namespace std;

class bankaccount
{
public:
    double balance;

    bankaccount(double b)
    {
        balance = b;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "insufficient funds!" << endl;
        }
        else
        {
            balance -= amount;
        }
    }
    void displaybalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main()
{
    bankaccount acc(100.0);

    acc.displaybalance();

    acc.deposit(50.0); 
    acc.displaybalance();

    acc.withdraw(30.0); 
    acc.displaybalance();

    acc.withdraw(150.0); 
    acc.displaybalance();

    return 0;
}
