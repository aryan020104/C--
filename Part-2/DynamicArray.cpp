#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int *numbers = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers: " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nStored numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete[] numbers;

    return 0;
}