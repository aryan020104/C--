#include <iostream>
using namespace std;

int weight;
double dailyPrice;
double revenue;

void Data_query()
{
    cout << "Enter the weight:";
    cin >> weight;

    cout << "Enter the daily price:";
    cin >> dailyPrice;
}

void Calculate_revenue()
{
    revenue = weight * dailyPrice;

    cout << "Revenue generated:" << revenue << endl;
}

int main()
{

    cout << "Welcome to the Farmer Max's Farm!" << endl;

    Data_query();
    Calculate_revenue();

    return 0;
}