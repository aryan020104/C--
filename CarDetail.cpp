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

int main()
{
    Car cars[3] = {
        Car("BMW", 4),
        Car("Audi", 5),
        Car("Mercedes", 6)};

    Truck trucks[2] = {
        Truck(10, "Man"),
        Truck(20, "Volvo")};

    int passengers;

    for (int i = 0; i < 3; i++)
    {
        cout << "Howw many passengers baords car: " << i + 1 << endl;
        cin >> passengers;

        cars[i].Boarding(passengers);
        cars[i].Display();
    }

    for (int i = 0; i < 3; i++)
    {
        cars[i].Display();
    }

    int tonnes;

    for (int i = 0; i < 2; i++)
    {
        cout << "How many tonnes should be loaded into truck: " << i + 1 << endl;
        cin >> tonnes;

        trucks[i].Loading(tonnes);
        trucks[i].Display();
    }

    for (int i = 0; i < 2; i++)
    {
        trucks[i].Display();
    }

    return 0;
}