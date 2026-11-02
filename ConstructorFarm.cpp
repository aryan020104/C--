#include <iostream>
using namespace std;

class Animal
{
private:
    float Revenue;
    float Weight;
    float DailyPrice;

public:
    void request_data()
    {
        cout << "How is the daily price?" << endl;
        cin >> DailyPrice;
        cout << "What is the weight of an animal?" << endl;
        cin >> Weight;
    }

public:
    Animal()
    {
        request_data();
    };

    Animal(float w, float p) : Weight(w), DailyPrice(p) {}

    void Calculate_revenue()
    {
        Revenue = Weight * DailyPrice;
        cout << "Revenue: " << Revenue << endl;
    }
};

int main()
{
    Animal pig(19, 2.5);
    cout << "Pig";
    pig.Calculate_revenue();

    Animal cow;
    cout << "Cow";
    cow.Calculate_revenue();

    cout << endl
         << endl;

    return 0;
}