#include <iostream>
using namespace std;

int main()
{
    // if - else program
    int secret = 7;
    int number;
    cout << "Enter secret:";
    cin >> number;

    if (secret == number)
    {
        cout << "win" << endl;
    }
    else
    {
        cout << "lose" << endl;
    }

    return 0;
}