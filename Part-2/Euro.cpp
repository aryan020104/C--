#include <iostream>
using namespace std;

class Euro
{
private:
    int euro;
    int cent;

public:
    Euro(int e, int c) : euro(e), cent(c)
    {
    }

    void output()
    {
        cout << euro << "," << cent << "Euro" << endl;
    }

    void normalize()
    {
        while (cent < 0)
        {
            euro--;
            cent += 100;
        }

        while (cent >= 100)
        {
            euro++;
            cent -= 100;
        }
    }

    Euro operator+(Euro other)
    {
        Euro result(euro + other.euro, cent + other.cent);
        result.normalize();
        return result;
    }

    Euro operator-(Euro other)
    {
        Euro result(euro - other.euro, cent - other.cent);
        result.normalize();
        return result;
    }

    Euro operator*(double rate)
    {
        double total = (euro * 100 + cent) * rate;
        int newEuro = static_cast<int>(total) / 100;
        int newCent = static_cast<int>(total) % 100;
        Euro result(newEuro, newCent);
        result.normalize();
        return result;
    }
};

int main() {
    Euro myMoney(100, 80);
    Euro yourMoney(45, 30);
    Euro fine(25, 80);
    Euro ourMoney(0, 0);

    double interestrate = 3.5;

    ourMoney = myMoney + yourMoney;
    ourMoney.output();

    ourMoney = ourMoney - fine;
    ourMoney.output();

    ourMoney = ourMoney.operator*(interestrate);
    ourMoney.output();

    return 0;
}