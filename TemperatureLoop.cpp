#include <iostream>
using namespace std;

int main()
{
    double fahrenheit;
    double celsius;
    double stepsize;
    double maximumValue;
    double startingFahrenheit;

    do
    {
        cout << "Enter fahrenheit: ";
        cin >> fahrenheit;
    } while (fahrenheit < 0);

    startingFahrenheit = fahrenheit;

    cout << "Enter the step size:" << endl;
    cin >> stepsize;

    cout << "Enter the maximum value:" << endl;
    cin >> maximumValue;

    for (fahrenheit = fahrenheit; fahrenheit <= maximumValue; fahrenheit += stepsize)
    {
        celsius = ((fahrenheit - 32) * 5.0) / 9.0;
        cout << "Fahrenheit: " << fahrenheit
             << "\t Celsius: " << celsius << endl;
    }

    fahrenheit = startingFahrenheit;

    while (fahrenheit <= maximumValue)
    {
        celsius = ((fahrenheit - 32) * 5.0) / 9.0;
        cout << "Celsius: " << celsius << " | ";

        if (celsius <= 10)
        {
            cout << "It is cold" << endl;
        }
        else if (celsius <= 20)
        {
            cout << "It is pleasantly warm" << endl;
        }
        else
        {
            cout << "It is getting hot" << endl;
        }

        fahrenheit += stepsize;
    }
    return 0;
}