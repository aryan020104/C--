#include <iostream>
#include <cstdlib>

using namespace std;

class Animals
{
protected:
    int Number;

public:
    void displaydata()
    {
        cout << "There are " << Number << " animals with " << endl;
    }
    Animals(int n) : Number(n)
    {
    }
};

class SlaughterCattle : public Animals
{
private:
    float Weight;

public:
    SlaughterCattle(int n, float w) : Animals(n), Weight(w)
    {
    }

    void displaydata()
    {
        Animals::displaydata();
        cout << "Weight: " << Weight << "Kg" << endl;
    }
};
class DairyCattle : public Animals
{
private:
    float milkyield;

public:
    DairyCattle(int n, float milk) : Animals(n), milkyield(milk)
    {
    }
    void displaydata()
    {
        Animals::displaydata();
        cout << "Milk Yield: " << milkyield << "Litres" << endl;
    }
};

int main()
{
    SlaughterCattle cow(10, 500);
    DairyCattle dairy(20, 30);

    cow.displaydata();
    dairy.displaydata();
    return 0;
};