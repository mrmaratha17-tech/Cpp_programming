#include <iostream>
using namespace std;

class Account
{
    int accNo;
    float balance;

public:
    Account(int a, float b)
    {
        accNo = a;
        balance = b;
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance;
    }
};

int main()
{
    Account a(12345, 5000);
    a.display();

    return 0;
}
