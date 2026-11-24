#include <iostream>
using namespace std;

class Customer
{
public:
    double payment;

    Customer(double p) : payment(p)
    {
    }

    virtual void Payment(double amount)
    {
        payment = amount;
    }

    void displayData()
    {
        cout << "Total amount: " << payment;
    }
};

class NewCustomer : public Customer
{
public:
    double discount = 0.10;

    NewCustomer(double p, double d = 0.10) : Customer(p), discount(d)
    {
    }

    void Payment(double amount)
    {
        payment = amount - (amount * discount);
    }
};

class RegularCustomer : public Customer
{
public:
    double discount = 0.20;

    RegularCustomer(double p, double d = 0.20) : Customer(p), discount(d)
    {
    }
    void Payment(double amount)
    {
        payment = amount - (amount * discount);
    }
};

void Pay(Customer &customer, double amount)
{
    customer.Payment(amount);
    customer.displayData();
}

int main()
{
    Customer c1(0);
    Customer c2(0);

    RegularCustomer rc1(0);
    RegularCustomer rc2(0);

    NewCustomer nc1(0);
    int type;
    double amount;

    cout << "Enter your type as a customer: " << endl;
    cout << "1. Customer\n"
         << endl;
    cout << "2. New Customer\n"
         << endl;
    cout << "3. Regular Customer\n"
         << endl;

    cin >> type;

    cout << "Enter a amount: ";
    cin >> amount;

    switch (type)
    {
    case 1:
        Pay(c1, amount);
        break;

    case 2:
        Pay(nc1, amount);
        break;
    case 3:
        Pay(rc1, amount);
        break;

    default:
        cout << "Invalid customer type!";
    }
}