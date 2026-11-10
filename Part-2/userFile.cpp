#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream readFile("userFile.txt");
    char letter;
    char ch;
    int count = 0;

    cout << "Enter a letter: ";
    cin >> letter;


    while (readFile.get(ch))
    {
        if (ch == letter)
        {
            count++;
        }
        }
    cout << "The letter appears " << count << " times.";
    readFile.close();
}