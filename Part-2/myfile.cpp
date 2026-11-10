#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream myfile("myfile.txt");

    myfile << "Hello, my name is Aryan." << endl;
    myfile << "I am learning C++." << endl;
    myfile << "File handling is interesting" << endl;

    myfile.close();

    ifstream readFile("myfile.txt");

    string line;
    int lineNumber = 1;

    while (getline(readFile, line))
    {
        cout << lineNumber << ": " << line << endl;
        lineNumber++;
    }
    readFile.close();
    return 0;
}