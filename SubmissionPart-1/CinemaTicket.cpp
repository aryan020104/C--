#include <iostream>
#include <string>
using namespace std;

class Ticket{
    private:
    string Holdersname;
    double price;
    int row;
    int seat;

    public:
    Ticket(string h, double p, int r, int s): Holdersname(h),price(p), row(r), seat(s){

    }

    double getPrice(){
        return price;
    }
};
class Standard: public Ticket{
    private:
    string selection;

    public:
    Standard(string h, double p, int r , int s, string ss) : Ticket(h,p,r,s), selection(ss) {

    }

    string getSelection(){
        return selection;
    }
};

class Comfort: public Ticket{
    private:
    bool snackPackage;

    public:
    Comfort(string h, double p, int r , int s, bool sp) : Ticket(h,p,r,s) , snackPackage(sp){

    }

    bool getSnackPackage(){
        return snackPackage;
    }
};

class ReducedTicket: public Ticket{
    private:
    string  studentID;
    public:
    ReducedTicket(string h, double p, int r , int s, string sId) : Ticket(h,p,r,s), studentID(sId){

    }
    string getStudentID(){
        return studentID;
    }
};

int main()
{

    int voucher = 45;
    double amountSpent = 0;
    double balance = 45;
    int choice;
    int seats[5][8];

    for (int i = 0; i < 5; i++)
    {
        cout << "Row: " << i << endl;

        for (int j = 0; j < 8; j++)
        {
            seats[i][j] = 0;
        }
    }

    do
    {
        cout << "1. show ticket types" << endl;
        cout << "2. show seating plan" << endl;
        cout << "3. Book tickets" << endl;
        cout << "4. show total and remaining balance" << endl;
        cout << "5. Exit program" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Available tickets types: " << endl;
            cout << "Standard: €9.50" << endl;
            cout << "Comfort: €13.50" << endl;
            cout << "Reduced: €7.00" << endl;
            break;
        case 2:

            cout << "Seating plan: " << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Row: " << i+1 << endl;

                for (int j = 0; j < 8; j++)
                {

                    if (seats[i][j] == 0)
                    {
                        cout << "O";
                    }
                    else
                    {
                        cout << "X" << endl;
                    }
                }
                cout << endl;
            }

            break;

        case 3:
            cout << "Book tickets" << endl;
            break;

        case 4:
            cout << "Remaining balance: " << endl;
            break;

        case 5:
            cout << "Exit the program!" << endl;
            break;
        default:
            cout << "Please select a valid choice!" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}