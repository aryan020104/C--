#include <iostream>
using namespace std;

int main()
{
    int animalNumbers[50];

    for (int i = 1; i < 50; i++)
    {
        animalNumbers[i] = i + 1;
    }

    for (int i = 0; i < 50; i++)
    {
        cout << "Animal number: " << animalNumbers[i] 
             << "array position: " << i << endl;
    }
}