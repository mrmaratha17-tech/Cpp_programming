#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area = " << 3.14 * radius * radius;
    }
};

int main()
{
    Circle c(7);
    c.area();
    return 0;
}
