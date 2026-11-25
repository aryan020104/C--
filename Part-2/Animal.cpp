#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;

    Animal(string n) : name(n)
    {
    }

    virtual void makeSound() = 0;
};

class Cow : public Animal
{
public:
    Cow(string n) : Animal(n)
    {
    }

    void makeSound() override
    {
        cout << "Moo" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string n) : Animal(n)
    {
    }

    void makeSound() override
    {
        cout << "Woof" << endl;
    }
};

int main()
{
    Cow cow("Bessie");
    Dog dog("Jack");

    cout << cow.name << endl;
    cow.makeSound();

    cout << dog.name << endl;
    dog.makeSound();

    return 0;
}