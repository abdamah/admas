#include <iostream>

using namespace std;

int main()
{
    // FIZZBUZZ program: if -else if -else program
    int number;
    cout << "Enter number [1 - 100]:";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0)
    {
        cout << "FizzBuzz" << endl;
    }
    else if (number % 3 == 0)
    {
        cout << "Fizz" << endl;
    }
    else if (number % 5 == 0)
    {
        cout << "Buzz" << endl;
    }

    else
    {
        cout << number << endl;
    }

    return 0;
}