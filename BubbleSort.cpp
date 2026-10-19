#include <iostream>
#include <string>
using namespace std;

void sort(string names[], int size);

int main()
{
    string names[5];

    cout << "Please enter 5 names: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Name " << i + 1 << ": ";
        cin >> names[i];
    }

    sort(names, 5);

    cout << "\n Names in  alphabetical order: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;
    }
    return 0;
}

void sort(string names[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if(names[j]> names[j+1])
            {
                string temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }
}
