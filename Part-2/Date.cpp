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
    Date(int d = 1, int m = 1, int y = 2000) : Day(d), Month(m), Year(y)
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
        if (!(in >> d.Day >> d.Month >> d.Year))
        {
            in.clear();
            in.ignore(10000, '\n');
            cout << "Invalid input! Enter numbers only.\n";
            continue;
        }

        if (d.Month >= 1 && d.Month <= 12)
        {

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
        }
        else
        {
            maxDays = 0;
        }

    } while (d.Month < 1 || d.Month > 12 || d.Day < 1 || d.Day > maxDays || d.Year < 0);

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
    Date myDate;
    cin >> myDate;
    cout << myDate << endl;

    return 0;
}