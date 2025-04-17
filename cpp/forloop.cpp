#include <iostream>
using namespace std;
int main()
{
    // for (int i = 0; i < 6; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    // 100 even / odd

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "even" << endl;
        }
        else
        {
            cout << i << "odd" << endl;
        }
    }

    return 0;
}