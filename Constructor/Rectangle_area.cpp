#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Area = " << length * width;
    }
};

int main()
{
    Rectangle r(10, 20);
    r.area();

    return 0;
}
