#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n < 0)
    {
        return 0;
    }

    int result = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int n;
    cout << " enter a number: " << endl;
    cin >> n;

    factorial(n);
}