#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "Name: " << name;
    }
};

int main()
{
    Student s;
    s.getName();
    s.display();

    return 0;
}
