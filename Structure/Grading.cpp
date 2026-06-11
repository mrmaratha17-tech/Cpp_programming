#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    Student s[3];
    int maxIndex = 0;

    for(int i=0; i<3; i++)
    {
        cin >> s[i].roll
            >> s[i].name
            >> s[i].marks;
    }

    for(int i=1; i<3; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    cout << "Topper: "
         << s[maxIndex].name;

    return 0;
}
