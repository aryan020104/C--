#include <iostream>
#include <string>

using namespace std;

class Phone
{
public:
    string phoneNumber;
    string color;

    Phone(string pN, string c) : phoneNumber(pN), color(c)
    {
    }

    virtual void displayData()
    {

        cout << "Phone number: " << phoneNumber << endl;
        cout << "Color: " << color << endl;
    }
};

class MobilePhone : public Phone
{
public:
    string network;

    MobilePhone(string pN, string c, string n) : Phone(pN, c), network(n)
    {
    }

    void displayData()
    {
        Phone::displayData();
        cout << "Network: " << network << endl;
    }
};

class CablePhone: public Phone{
    public:
    float cablelength;

    CablePhone(string pN, string c , float cL): Phone(pN, c), cablelength(cL){

    }

    void displayData(){
        Phone::displayData();
        cout << "Cable Length: " << cablelength;
    }
};

int main(){
    Phone* telephone;

    telephone = new MobilePhone("123446", "red", "Airtel");
    telephone->displayData();

    delete telephone;
    
    telephone = new CablePhone("123446", "red", 200);
    telephone->displayData();

    delete telephone;
}
