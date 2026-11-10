#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream readFile("input.txt");
    ofstream createFile("output.txt");

    char ch;
    bool previousSpace = false;

    while (readFile.get(ch))
    {
        if (ch == ' ' && previousSpace == true)
        {
        }
        else
        {
            createFile.put(ch);
            cout << ch;
        }

        previousSpace = (ch == ' ');
    }

    readFile.close();
    createFile.close();
}