#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    double length, width;

    do
    {
        cout << "Enter a lenght: " << endl;
        cin >> length;

        cout << "Enter a width: " << endl;
        cin >> width;

        if (length == 0 || width == 0)
        {
            cout << "Enter a valid number!";
            break;
        }
        Rectangle *rect = new Rectangle(length, width);
        cout << "Area of a rectanlge: " << rect->calculateArea() << endl;

        delete rect;
    } while (length != 0 && width != 0);

    return 0;
}