#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Object Created\n";
    }
};

int main()
{
    Student s[5];

    return 0;
}
