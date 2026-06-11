#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    Employee e;

    cin >> e.id >> e.name >> e.salary;

    cout << "\nEmployee Details\n";
    cout << e.id << endl;
    cout << e.name << endl;
    cout << e.salary;

    return 0;
}
