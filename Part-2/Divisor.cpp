#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
    ofstream resultFile("calculations.txt", ios::app);
    if (!resultFile)
    {
        cout << "Error: Cannot open file for writing!" << endl;
        return 1;
    }

    double dividend, divisor, result;
    string choice;

    do
    {
        cout << "Enter the value of dividend: " << endl;
        cin >> dividend;

        cout << "Enter the value of divisor: " << endl;
        cin >> divisor;
        if (divisor == 0)
        {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        else
        {
            result = dividend / divisor;
            resultFile << dividend << "/" << divisor << "=" << result << endl;
        }
        cout << "Do you want to continue? (Yes/No): " << endl;
        cin >> choice;
    } while (choice == "Yes");

    resultFile.close();

    ifstream readFile("calculations.txt");

    string line;
    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();
}