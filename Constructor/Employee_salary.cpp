#include <iostream>
using namespace std;

class Employee
{
    int id;
    float salary;

public:
    Employee(int i, float s)
    {
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary;
    }
};

int main()
{
    Employee e(1, 45000);
    e.display();
    return 0;
}
