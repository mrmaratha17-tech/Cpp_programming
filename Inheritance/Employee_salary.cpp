#include <iostream>
using namespace std;

class Employee
{
protected:
    float salary;
};

class Manager : public Employee
{
public:
    void getSalary()
    {
        cin >> salary;
    }

    void display()
    {
        cout << "Salary: " << salary;
    }
};

int main()
{
    Manager m;
    m.getSalary();
    m.display();

    return 0;
}
