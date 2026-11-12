#include <iostream>
using namespace std;

int numbers[] = {10, 20, 30};

void increaseValue(int *begin, int *end)
{
    int *start = begin;
    for (; begin <= end; begin++)
    {
        *begin += 1;
    }
    begin = numbers;

    for (int *ptr = start; ptr <= end; ptr++)
    {
        cout << *ptr << endl;
    }
}

int main()
{
    increaseValue(numbers, numbers + 2);
    return 0;
}