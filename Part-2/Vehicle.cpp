#include <iostream>
#include <cstdlib>

using namespace std;

class Vehicle
{
protected:
    int Number;

public:
    Vehicle() {};                        // Default constructor
    Vehicle(int numb) : Number(numb) {}; // Constructor with member initializer list
};

class Car : public Vehicle
{
    // Data members
private:
    int CarNo;
    float Weight;
    Car *Successor; // Concatenation pointer to the successor
    // Member functions
public:
    // Constructor
    Car(int no = 0, float wei = 0.0) : CarNo(no), Weight(wei), Successor(0) {}
    int getCarNo() const { return CarNo; }
    float getWeight() const { return Weight; }
    void print() const { cout << "Car number: " << CarNo << ", Weight: " << Weight << endl; }
    Car *next() { return Successor; }

    void setNext(Car *car)
    {
        Successor = car;
    }
};

class ListOfCars // List of cars
{
private:
    Car *Beginning;
    Car *End;

public:
    ListOfCars() : Beginning(nullptr), End(nullptr)
    {
    }

    void create(int carNo, float weight)
    {
        Car *newCar = new Car(carNo, weight);

        if (Beginning == nullptr)
        {
            Beginning = newCar;
            End = newCar;
        }
        else
        {
            End->setNext(newCar);
            End = newCar;
        }
    }

    void showList()
    {
        Car *current = Beginning;
        while (current != nullptr)
        {
            current->print();
            current = current->next();
        }
    }

    void deleteFirst()
    {
        Car *current = Beginning;
        if (Beginning == nullptr)
        {
            return;
        }

        Car *temp = Beginning;
        Beginning = Beginning->next();
        delete temp;
        if (Beginning == nullptr)
        {
            End = nullptr;
        }
    }

    void deleteLast()
    {
        if (Beginning == nullptr)
        {
            return;
        }

        if (Beginning == End)
        {
            delete Beginning;
            Beginning = nullptr;
            End = nullptr;
            return;
        }

        Car *current = Beginning;
        while (current->next()->next() != current)
        {
            current = current->next();
        }

        Car *temp = End;
        current->setNext(nullptr);
        End = current;
        delete temp;
    }
    void search(int carNo)
    {
        Car *current = Beginning;

        while (current != nullptr)
        {
            if (current->getCarNo() == carNo)
            {
                current->print();
                return;
            }

            current = current->next();
        }

        cout << "Car not found!" << endl;
    }

    void clearList()
    {
        Car *current = Beginning;

        while (current != nullptr)
        {
            Car *temp = current;
            current = current->next();
            delete temp;
        }

        Beginning = nullptr;
        End = nullptr;
    }

    ~ListOfCars()
    {
        clearList();
    }
};

int main()
{
    int selection = 1;
    ListOfCars list;
    int cNo, CarNo;
    float wei;
    Car *kp;

    do
    {
        cout << endl
             << "---- CAR MANAGEMENT ----" << endl;
        cout << "1. Create a new car" << endl;
        cout << "2. Delete car" << endl;
        cout << "3. Show list" << endl;
        cout << "0. Exit program" << endl;
        cout << "> Make a selection [Return]: ";
        cin >> selection;
        cout << endl;

        switch (selection)
        {
        case 0: // End
            cin.ignore();
            cin.get();
            break;
        case 1: // Create
            cout << "Enter a car number: " << endl;
            cin >> cNo;
            cout << "Enter a cars weight: " << endl;
            cin >> wei;

            list.create(cNo, wei);
            break;

        case 2: // Delete
            int choice;
            cout << "1. Delete first car" << endl;
            cout << "2. Delete Second car" << endl;
            cout << "Your choice: " << endl;
            cin >> choice;

            if (choice == 1)
            {
                list.deleteFirst();
            }
            else if (choice == 2)
            {
                list.deleteLast();
            }
            else
            {
                cout << "Invalid choice!";
            }

            break;
        case 3: // List of all cars
            list.showList();
            break;
        case 4: // Search for car by CarNo. and if found, then output number of passengers/weight
            int searchNo;
            cout << "Enter car number to Search: ";
            cin >> searchNo;
            list.search(searchNo);
            break;
        default: // Incorrect input
            cin.ignore();
            cin.get();
            break;
        }
    } while (selection != 0);

    // Delete all elements of the list

    return 0;
}
