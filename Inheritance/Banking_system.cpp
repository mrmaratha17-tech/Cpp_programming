#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;
};

class Savings : public Account
{
public:
    void deposit(float amount)
    {
        balance = amount;
    }

    void display()
    {
        cout << "Balance: " << balance;
    }
};

int main()
{
    Savings s;

    s.deposit(5000);
    s.display();

    return 0;
}
