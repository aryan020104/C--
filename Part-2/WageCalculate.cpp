#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Person
{
private:
    int Persno;
    string name;
    int hours;
    double hourlywage;

public:
    void setPersno(int p)
    {
        Persno = p;
    }

    void setName(const string &n)
    {
        name = n;
    }

    void setHours(int h)
    {
        hours = h;
    }

    void setHourlyWage(double hw)
    {
        hourlywage = hw;
    }

    int getPersno() const
    {
        return Persno;
    }

    const string &getName() const
    {
        return name;
    }

    int getHours() const
    {
        return hours;
    }

    double getHourlyWage() const
    {
        return hourlywage;
    }

    double calculateGrossWage()
    {
        return hours * hourlywage;
    }
    Person(int p, string n, int h, double hw) : Persno(p), name(n), hours(h), hourlywage(hw)
    {
    }
    Person()
    {
        cout << "Person object created!" << endl;
    }
};

int main()
{
    int persno, hours;
    string name;
    double hourlywage;
    ifstream personfile("Person.txt");
    if (!personfile)
    {
        cout << "Error: Cannot open Person.txt" << endl;
        return 1;
    }
    Person people[4];

    for (int i = 0; i < 4; i++)
    {
        personfile >> persno >> name >> hours >> hourlywage;

        people[i].setPersno(persno);
        people[i].setName(name);
        people[i].setHours(hours);
        people[i].setHourlyWage(hourlywage);
    }
    cout << left
         << setw(10) << "Persno"
         << setw(15) << "Name"
         << setw(10) << "Hours"
         << setw(15) << "HourlyWage"
         << setw(15) << "GrossWage" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << left
             << setw(10) << people[i].getPersno()
             << setw(15) << people[i].getName()
             << setw(10) << people[i].getHours()
             << setw(15) << fixed << setprecision(2) << people[i].getHourlyWage()
             << setw(15) << people[i].calculateGrossWage()
             << endl;
    }
}