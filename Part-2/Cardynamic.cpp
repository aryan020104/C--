#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;

public:
    Vehicle(string b) : brand(b)
    {
    }
};

class Car : public Vehicle
{
private:
    int Number_Passengers;

public:
    Car(string b, int n) : Vehicle(b), Number_Passengers(n)
    {
    }
    void Boarding(int passengers);
    void Display();
};

void Car::Boarding(int passengers)
{
    Number_Passengers += passengers;
}

void Car::Display()
{
    cout << "Brand: " << brand << "No of passengers: " << Number_Passengers << endl;
}

class Truck : public Vehicle
{
private:
    int Tonnes;

public:
    Truck(int T, string b) : Tonnes(T), Vehicle(b)
    {
    }

    void Loading(int Tonnes);
    void Display();
};

void Truck::Loading(int tonnes)
{
    Tonnes += tonnes;
}
void Truck::Display()
{
    cout << "Brand: " << brand << "Tonnes: " << Tonnes << endl;
}

int main(){
    string brand;
    int passengers;
    int tonnes;
    Car* cars[3];
    Truck* trucks[3];

    for (int i = 0; i < 3; i++)
    {   
        cout << "Enter a brand name: " << endl;
        cin >> brand;

        cout << "Enter number of passengers: " << endl;
        cin >> passengers;

        cars[i] = new Car(brand, passengers);
    }

    for (int i = 0; i < 3; i++)
    {
       cout << "Enter a brand name: " << endl;
        cin >> brand;

        cout << "Enter number of tonnes: " << endl;
        cin >> tonnes;

        trucks[i] = new Truck(tonnes, brand);
    }
    
    
    cout << "\n--- Car Details ---" << endl;
    for (int i = 0; i < 3; i++)
    {
        cars[i]->Display();
    }

    cout << "\n--- Truck Details ---" << endl;
    for (int i = 0; i < 3; i++)
    {
        trucks[i]->Display();
    }


    for (int i = 0; i < 3; i++)
    {
        delete cars[i];
        delete trucks[i];
    }
    
}