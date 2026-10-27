#include <iostream>
#include <string>
using namespace std;

class Article
{
private:
    string name;
    double price;

public:
    void set_name()
    {
        cout << "Please enter the name of an Article: " << endl;
        cin >> name;
    }

    string get_name()
    {
        return name;
    }

    void set_price()
    {
        cout << "Please enter the price of an Article: " << endl;
        cin >> price;
    }

    double get_price()
    {
        return price;
    }

    void enter_data()
    {
        set_name();
        set_price();
    }

    void show_data()
    {
        cout << "Name of an article: " << get_name() << " Price: " << get_price() << " Euro. " << endl;
    }

    void calculate_totalPrice(int quantity)
    {
        cout << "Total price: " << quantity * get_price() << endl;
    }
};

int main()
{
    Article article;
    int quantity;
    article.enter_data();
    article.show_data();

    cout << "Enter a quantity: " << endl;
    cin >> quantity;

    article.calculate_totalPrice(quantity);

    return 0;
}