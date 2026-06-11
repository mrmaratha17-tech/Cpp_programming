#include <iostream>
using namespace std;

class Father
{
public:
    void showFather()
    {
        cout << "Father Class\n";
    }
};

class Mother
{
public:
    void showMother()
    {
        cout << "Mother Class\n";
    }
};

class Child : public Father, public Mother
{
};

int main()
{
    Child c;
    c.showFather();
    c.showMother();

    return 0;
}
