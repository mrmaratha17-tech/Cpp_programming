#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s;

    cout << "Enter Roll No, Name and Marks: ";
    cin >> s.roll >> s.name >> s.marks;

    cout << "\nStudent Details\n";
    cout << "Roll No: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks;

    return 0;
}
