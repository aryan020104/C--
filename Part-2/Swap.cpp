#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;

    swap(&num1, &num2);
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    return 0;
}