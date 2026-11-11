#include <iostream>
#include <stdexcept>
using namespace std;

double calculateVolume(double length, double width, double height)
{

    if (length <= 0 || width <= 0 || height <= 0)
    {
        throw std::invalid_argument("Dimensions must be greater than 0!");
    }

    return length * width * height;
}

int main()
{
    double length, width, height;

    cout << "Enter the lenght" << endl;
    cin >> length;
    cout << "Enter the width" << endl;
    cin >> width;
    cout << "Enter the height" << endl;
    cin >> height;

    try
    {
        double volume = calculateVolume(length, width, height);
        cout << "Volume of cuboid is: " << volume << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}