#include <iostream>
using namespace std;

int stringLength(char text[])
{
    int count = 0;

    while (text[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char text[50];
    cout << "Enter a string: " << endl;
    cin.getline(text, 50);

    cout << "Length: " << stringLength(text) << endl;
    return 0;
}