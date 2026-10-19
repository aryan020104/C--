#include <iostream>
using namespace std;

int main()
{
    double celsius[10];
    double fahrenheit = 0;

    for (int i = 1; i < 10; i++)
    {
        celsius[i] = (fahrenheit - 32) * 5.0 / 9.0;
        fahrenheit += 10;
    }

    int i = 0;
    fahrenheit = 0;

    while (i < 10)
    {
        cout << "Index: " << i
             << ", Fahrenheit: " << fahrenheit
             << ", celsius: " << celsius[i] << endl;

        fahrenheit += 10;
        i++;
    }

    return 0;
}