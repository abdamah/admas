#include <iostream>
using namespace std;

int main()
{

    float celcius;
    float fahrenheit = 33;

    celcius = (fahrenheit - 32) * 5 / 9;
    cout << "Celsius:" << celcius << endl;

    return 0;
}