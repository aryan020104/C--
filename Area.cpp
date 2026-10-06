#include <iostream>
using namespace std;

const double PI = 3.14;
double number;

double square(double number)
{

    return number * number;
}
void calculateArea(double radius)
{
    double area = square(radius) * PI;

    cout << "Area of a circle is:" << area << endl;
}
int main()
{
    double radius;
    

    cout << "Welcome!" << endl;

    cout << "Enter a decimal number:" << endl;
    cin >> number;

    double result = square(number);
    cout << "Square of a number: " << result << endl;

    cout << "Enter a radius of a circle:" << endl;
    cin >> radius;
    calculateArea(radius);
}
