#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base condition
    if (n == 0)
    {
        return 1;
    }

    // Recursive body

    return n * factorial(n - 1);
}

int fact2(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    int result = factorial(5);
    cout << "factorial: " << result << endl;

    int result2 = fact2(5);
    cout << "fact2:" << result2 << endl;
    return 0;
}