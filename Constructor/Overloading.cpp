#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Default Constructor\n";
    }

    Demo(int x)
    {
        cout << "Value = " << x;
    }
};

int main()
{
    Demo d1;
    Demo d2(100);

    return 0;
}
