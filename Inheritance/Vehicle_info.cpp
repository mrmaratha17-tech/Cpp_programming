#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string company;
};

class Car : public Vehicle
{
public:
    void getData()
    {
        cin >> company;
    }

    void display()
    {
        cout << "Company: " << company;
    }
};

int main()
{
    Car c;
    c.getData();
    c.display();

    return 0;
}
