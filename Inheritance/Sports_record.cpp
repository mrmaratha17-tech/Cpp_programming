#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
};

class Sports : public Student
{
protected:
    string game;

public:
    void player()
    {
        cin >> name >> game;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Game: " << game;
    }
};

int main()
{
    Sports s;
    s.player();
    s.display();

    return 0;
}
