#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {1, 2, 3, 4};
    string name = "Abdallah";

    for (int i = 0; i < 4; i++)
    {

        cout << "number [" << i << "]:" << numbers[i] << endl;
    }

    int index = 0;
    while (index < 8)
    {
        cout << "name [" << index << "]:" << name[index] << endl;
        index++;
    }

    return 0;
}