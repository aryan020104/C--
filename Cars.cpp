#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    int mileage;
    static int totalRides;

public:
    Car(string b, int m) : brand(b), mileage(m)
    {
    }

    void drive(int kilometers);

    ~Car();

    static int getTotalRides()
    {
        return totalRides;
    }

    static void setTotalRides(int rides)
    {
        totalRides = rides;
    }

    void setMileage(int mileages)
    {
        mileage = mileages;
    }

    int getMileage()
    {
        return mileage;
    }
};

int Car::totalRides = 0;
void Car::drive(int kilometers)
{
    mileage += kilometers;
    totalRides++;
}

Car::~Car()
{
    cout << "Car object has been removed" << endl;
}

int main()
{
    Car cars("BMW", 1000);
    cars.drive(100);
    cout << "TotalRides: " << Car::getTotalRides() << endl;
    cout << "Mileage of a Car: " << cars.getMileage() << endl;

    Car cars1("Audi", 2000);
    cars1.drive(200);
    cout << "TotalRides: " << Car::getTotalRides() << endl;
    cout << "Mileage of a Car: " << cars1.getMileage() << endl;

    Car cars2("Porsche", 3000);
    cars2.drive(150);
    cout << "TotalRides: " << Car::getTotalRides() << endl;
    cout << "Mileage of a Car: " << cars2.getMileage() << endl;

    return 0;
}