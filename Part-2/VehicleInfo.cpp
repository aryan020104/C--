#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string brand;
    string licencePlate;
    int hp;
    int yearOfConstruction;

public:
    Vehicle(string b, string lp, int h, int yoc) : brand(b), licencePlate(lp), hp(h), yearOfConstruction(yoc)
    {
    }

    bool operator==(Vehicle other)
    {
        return brand == other.brand &&
               licencePlate == other.licencePlate &&
               hp == other.hp &&
               yearOfConstruction == other.yearOfConstruction;
    }

    bool operator>(Vehicle other)
    {
        return yearOfConstruction > other.yearOfConstruction;
    }

    bool operator<(Vehicle other)
    {
        return yearOfConstruction < other.yearOfConstruction;
    }

    void displayData()
    {
        cout << "Brand: " << brand << endl;
        cout << "Licence Plate: " << licencePlate << endl;
        cout << "Number of Hp: " << hp << endl;
        cout << "Year of Construction: " << yearOfConstruction << endl;
    }
};

int main()
{
    Vehicle v1("BMW", "AS2121", 200, 2026);
    Vehicle v2("Audi", "AS2122", 250, 2016);

    if (v1 == v2)
    {
        cout << "Vehicle are the same" << endl;
    }
    else
    {

        cout << "Vehicle are not same" << endl;
    }

    if (v1 > v2)
    {
        cout << "V1 is new" << endl;
    }
    else if (v1 < v2)
    {
        cout << "V1 is older" << endl;
    }
    else
    {
        cout << "Both vehicles have same age" << endl;
    }

    return 0;
}