#include <iostream>
using namespace std;

void hi(); // funciton declaration /prototype

int main()
{
    hi(); // fuction calling

    return 0;
}

void hi() // fucntion definition
{
    cout << "Hi" << endl;
}