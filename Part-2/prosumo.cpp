#include <iostream>
using namespace std;

void prosumo(int *arr, int size, int *sum, int *product)
{
    *sum = 0;
    *product = 1;

    for (int *ptr = arr; ptr < arr + size; ptr++)
    {
        *sum += *ptr;
        *product *= *ptr;
    }
}

int main()
{
    int numbers[] = {2, 3, 4, 5};
    int sum = 0;
    int product = 1;
    int size = 4;

    prosumo(numbers, size, &sum, &product);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}