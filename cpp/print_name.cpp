#include <iostream>
using namespace std;

void sayHi(string name)
{
    cout << "Hi " << name << endl;
}

int main()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;

    sayHi(name);
    return 0;
}