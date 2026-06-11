#include <iostream>
using namespace std;

struct Player
{
    int jerseyNo;
    char name[30];
    int runs;
};

int main()
{
    Player p[3];

    for(int i=0; i<3; i++)
    {
        cin >> p[i].jerseyNo
            >> p[i].name
            >> p[i].runs;
    }

    cout << "\nPlayer Records\n";

    for(int i=0; i<3; i++)
    {
        cout << p[i].jerseyNo << " "
             << p[i].name << " "
             << p[i].runs << endl;
    }

    return 0;
}
