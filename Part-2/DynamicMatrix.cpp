#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
   
    cout << "Enter the no of rows: ";
    cin >> rows;

    cout << "Enter the no of columns: ";
    cin >> columns;

    int **matrix = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = i * j;
        }
    }

    for (int i = 0; i < rows; i++)
    {
         int rowSum = 0;

        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
            rowSum += matrix[i][j];
        }
        cout << "| Row sum: " << rowSum << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}