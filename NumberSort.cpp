#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sort(int numbers[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand() % 100 + 1;
    }

    cout << "Unsorted numbers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl
         << endl;

    sort(numbers, SIZE);

    cout << endl
         << "Sorted numbers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}