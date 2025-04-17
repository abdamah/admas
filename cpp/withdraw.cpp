#include <iostream>
using namespace std;

double balance = 1000;
double withdraw(double amount)

{
    if (amount > balance)
    {
        cout << "Insufficient amount to withdraw" << endl;
    }
    else
    {

        cout << "amount: " << amount << endl;
        balance = balance - amount;
    }

    return balance;
}

int main()
{
    double balance = withdraw(200);
    cout << "Balance: " << balance << endl;
    return 0;
}