#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string lastname;
    string firstname;
    int age;

public:
    void insert()
    {
        cout << "Enter the first name: " << endl;
        cin >> firstname;

        cout << "Enter the last name: " << endl;
        cin >> lastname;

        cout << "Enter the age: " << endl;
        cin >> age;
    }
    void compare(Person other)
    {
        if (age > other.age)

        {
            cout << firstname << lastname << " Older!" << endl;
        }
        else
        {
            cout << other.firstname << other.lastname << "Could be older!" << endl;
        }
    }
};

int main()
{
    Person p1, p2;

    p1.insert();
    cout << endl;
    p2.insert();

    p1.compare(p2);

    return 0;
}