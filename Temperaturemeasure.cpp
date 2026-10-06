#include<iostream>
using namespace std;

const int CONSTANT = 32;
double temperature_fahrenheit;
double temperature_celsius;

int main(){
    cout << "Welcome to temperature measure!" << endl;

    cout << "Enter the temperature in Fahrenheit:";
    cin >> temperature_fahrenheit;

    temperature_celsius = ((temperature_fahrenheit - CONSTANT)*5)/9;

    cout << "Temperature in celsius:"<< temperature_celsius << endl;

    return 0;
}