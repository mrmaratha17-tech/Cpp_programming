#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
};

class Marks : public Student
{
protected:
    int marks;

public:
    void getData()
    {
        cin >> roll >> marks;
    }
};

class Result : public Marks
{
public:
    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;

        if(marks >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
};

int main()
{
    Result r;
    r.getData();
    r.display();

    return 0;
}
