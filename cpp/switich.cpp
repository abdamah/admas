#include <iostream>
using namespace std;

int main()
{

    int day = 0;

    switch (day)
    {
    case 0:
        cout << "Sat" << endl;

    case 1:
        cout << "Sun" << endl;

    case 2:
        cout << "Mon" << endl;
        break;
    case 3:
        cout << "Tue" << endl;
        break;
    case 4:
        cout << "Wed" << endl;
        break;
    case 5:
        cout << "Thu" << endl;
        break;
    case 6:
        cout << "Fri" << endl;
        break;

    default:
        cout << "Unknown" << endl;
    }

    return 0;
}