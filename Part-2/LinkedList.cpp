#include <iostream>
using namespace std;

class Element
{
public:
    int value;
    Element *next;
};

int main()
{
    Element *start = nullptr;

    int value;
    cout << "Enter a number(0 to stop): " << endl;
    cin >> value;

    while (value != 0)
    {

        Element *newElement = new Element;
        newElement->value = value;

        newElement->next = start;
        start = newElement;

        cout << "Enter another number (0 to stop): ";
        cin >> value;
    }
    Element *current = start;

    while (current != nullptr)
    {
        cout << current->value << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
    return 0;
}