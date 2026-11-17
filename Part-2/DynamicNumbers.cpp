#include <iostream>
using namespace std;

int main()
{
    int n;

    int sum = 0;

    cout << "How many numbers you want to store? ";
    cin >> n;
    int *numbers = new int[n];
    int largest = numbers[0];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: " << i + 1 << endl;
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];

        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Largest number: " << largest << endl;

    delete[] numbers;

    return 0;
}