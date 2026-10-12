#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;
    char op;

    cout << "Enter the numbers and operators for calculation: " << endl;
    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+':
        num3 = num1 + num2;
        cout << num3;
        break;
    case '-':
        num3 = num1 - num2;
        cout << num3;
        break;

    case '*':
        num3 = num1 * num2;
        cout << num3;
        break;

    case '/':
        num3 = num1 / num2;

        if (num2 == 0)
        {
            cout << "Error: Division by zero!" << endl;
        }
        else
        {
            num3 = num1 / num2;
            cout << num3 << endl;
        }
        break;

    default:
        cout << "Error: Invalid operator!" << endl;
        break;
    }
}