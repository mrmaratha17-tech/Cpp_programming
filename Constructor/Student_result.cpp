#include <iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    Student(int r, float m)
    {
        roll = r;
        marks = m;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;

        if(marks >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
};

int main()
{
    Student s(101, 78.5);
    s.display();
    return 0;
}
