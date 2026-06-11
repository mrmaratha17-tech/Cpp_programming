#include <iostream>
using namespace std;

struct Book
{
    int id;
    char title[50];
    float price;
};

int main()
{
    Book b;

    cin >> b.id >> b.title >> b.price;

    cout << "\nBook Details\n";
    cout << b.id << endl;
    cout << b.title << endl;
    cout << b.price;

    return 0;
}
