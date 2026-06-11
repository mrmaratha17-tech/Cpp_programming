#include <iostream>
using namespace std;

struct Date
{
    int day, month, year;
};

struct Student
{
    int roll;
    char name[30];
    Date dob;
};

int main()
{
    Student s;

    cin >> s.roll >> s.name;
    cin >> s.dob.day
        >> s.dob.month
        >> s.dob.year;

    cout << s.name << endl;
    cout << s.dob.day << "/"
         << s.dob.month << "/"
         << s.dob.year;

    return 0;
}
