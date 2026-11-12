#include <iostream>
#include <cstdlib>
using namespace std;

void sort(int *a);

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    sort(a);
    cout << "\nSorted Array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sort(int *a)
{
    for (int j = 0; j < 9; j++)
    {

        for (int i = 0; i < 9; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}