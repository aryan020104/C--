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
    Animal animals[2];
    animals[0].request_data();
    animals[0].calculate_revenue();

    animals[1].request_data();
    animals[1].calculate_revenue();
}