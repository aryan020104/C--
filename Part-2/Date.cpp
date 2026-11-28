#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
    int Day;
    int Month;
    int Year;

public:
    Date(int d, int m, int y) : Day(d), Month(m), Year(y)
    {
    }

    friend istream &operator>>(istream &in, Date &d);
    friend ostream &operator<<(ostream &out, const Date &d);
};

istream &operator>>(istream &in, Date &d)
{
    int maxDays;
    do
    {

        cout << "Enter day, month, year: ";
        in >> d.Day >> d.Month >> d.Year;

        if (d.Month == 2)
        {
            maxDays = 28;
        }
        else if (d.Month == 4 || d.Month == 6 || d.Month == 9 || d.Month == 11)
        {
            maxDays = 30;
        }
        else
        {
            maxDays = 31;
        }

    } while (d.Month < 1 || d.Month > 12 || d.Day < 1 || d.Day > maxDays || d.Year < 0);

    in >> d.Day >> d.Month >> d.Year;
    return in;
}

ostream &operator<<(ostream &out, const Date &d)
{
    out << setfill('0') << setw(2) << d.Day << "."
        << setw(2) << d.Month << "."
        << setw(4) << d.Year;

    return out;
}

int main()
{
    Date
}