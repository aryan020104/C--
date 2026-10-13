#include <iostream>
#include <string>
using namespace std;

string animalType;
int animalNumber;
double weight;
bool inStock = false;
double totalRevenue = 0.0;
int number;

void createAnimal()
{
    cout << "Enter animal type: " << endl;
    cin >> animalType;

    cout << "Enter the animal number: " << endl;
    cin >> animalNumber;

    cout << "Enter the weight of an animal: " << endl;
    cin >> weight;

    inStock = true;

    cout << "Animal created Successfully!";
};
void displayAnimal()
{
    cout << "Animal type: " << animalType << endl;
    cout << "Animal number: " << animalNumber << endl;
    cout << "Weight of an animal: " << weight << endl;

    if (inStock == true)
    {
        cout << "Animal in Stock" << endl;
    }
    else
    {
        cout << "Animal is out of stock";
    }
};

void sellAnimal(int number)
{
    double dailyPrice;

    if (inStock == false)
    {
        cout << "Animal is out of stock";
    }
    else if (number == animalNumber)
    {

        cout << "Enter the daily price: " << endl;
        cin >> dailyPrice;

        totalRevenue += weight * dailyPrice;
        inStock = false;

        cout << "Total revenue generated: " << totalRevenue << endl;
    }
    else
    {
        cout << "Animal number was not found!";
    }
};

int main()
{
    int choice;

    do
    {
        cout << "\n ---- Farmer Max's Farm ----" << endl;
        cout << "1. Create animal" << endl;
        cout << "2. Display animal" << endl;
        cout << "3. Sell animal" << endl;
        cout << "0. End program" << endl;

        cout << "Enter your choice! " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAnimal();
            break;

        case 2:
            displayAnimal();
            break;

        case 3:
            cout << "Enter the animal number to sell:";
            cin >> number;
            sellAnimal(number);
            break;

        case 0:
            cout << "Program ended!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }


    } while (choice != 0);
}