#include <iostream>
using namespace std;

int main(){
    double a, b, c, result;

    cout<< "Enter 1st number" << endl;
    cin >> a;

    cout<< "Enter 2nd number" << endl;
    cin >> b;

    cout<< "Enter 3rd number" << endl;
    cin >> c;

    result = (a * b) + c;

    cout<< "Calculated ans:" << result;

    return 0;
}