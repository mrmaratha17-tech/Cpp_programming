#include <iostream>
using namespace std;

struct Account
{
    int accNo;
    char name[30];
    float balance;
};

int main()
{
    Account a;

    cin >> a.accNo
        >> a.name
        >> a.balance;

    cout << "\nAccount Details\n";
    cout << a.accNo << endl;
    cout << a.name << endl;
    cout << a.balance;

    return 0;
}
