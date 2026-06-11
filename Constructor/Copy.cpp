#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int n)
    {
        num = n;
    }

    Number(Number &obj)
    {
        num = obj.num;
    }

    void display()
    {
        cout << num;
    }
};

int main()
{
    Number n1(50);
    Number n2(n1);

    n2.display();

    return 0;
}
