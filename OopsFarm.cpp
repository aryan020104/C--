#include <iostream>
using namespace std;

class Animal
{
public:
    float revenue;
    float weight;
    float dailyPrice;

    void request_data();

    void calculate_revenue();
};

void Animal::request_data()
{
    cout << "How is the daily price?" << endl;
    cin >> dailyPrice;
    cout << "What is the weight of the animal?" << endl;
    cin >> weight;
}

void Animal::calculate_revenue()
{
    revenue = weight * dailyPrice;
    cout << "Revenue: " << revenue << endl;
}

int main()
{
    Animal animal;
    animal.request_data();
    animal.calculate_revenue();

    return 0;
}