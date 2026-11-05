#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    string Holdersname;
    double price;
    int row;
    int seat;

public:
    Ticket(string h, double p, int r, int s) : Holdersname(h), price(p), row(r), seat(s)
    {
    }

    double getPrice()
    {
        return price;
    }
};
class Standard : public Ticket
{
private:
    string selection;

public:
    Standard(string h, double p, int r, int s, string ss) : Ticket(h, p, r, s), selection(ss)
    {
    }

    string getSelection()
    {
        return selection;
    }
};

class Comfort : public Ticket
{
private:
    bool snackPackage;

public:
    Comfort(string h, double p, int r, int s, bool sp) : Ticket(h, p, r, s), snackPackage(sp)
    {
    }

    bool getSnackPackage()
    {
        return snackPackage;
    }
};

class ReducedTicket : public Ticket
{
private:
    string studentID;

public:
    ReducedTicket(string h, double p, int r, int s, string sId) : Ticket(h, p, r, s), studentID(sId)
    {
    }
    string getStudentID()
    {
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

    string names[4] = {};
    double ticketPrices[4] = {};
    string ticketTypes[4] = {};
    int bookedRows[4] = {};
    int bookedSeats[4] = {};

    do
    {
        cout << "1. show ticket types" << endl;
        cout << "2. show seating plan" << endl;
        cout << "3. Book tickets" << endl;
        cout << "4. show total and remaining balance" << endl;
        cout << "5. Show booking summary" << endl;
        cout << "6. Exit program" << endl;
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
                cout << "Row " << i + 1 << ":";
                for (int j = 0; j < 8; j++)
                {

                    if (seats[i][j] == 0)
                    {
                        cout << "O";
                    }
                    else
                    {
                        cout << "X";
                    }
                }
                cout << endl;
            }

            break;

        case 3:
        {
            cout << "Book tickets" << endl;
            string forename;
            string surname;
            int ticketChoice;
            int row;
            int selectedSeat;
            string selection;
            string studentID;
            bool snackPackage = false;
            bool validTicket = true;

            for (int i = 1; i <= 4; i++)
            {
                double price = 0.0;
                cout << "Enter the ticket holder forename: " << endl;
                cin >> forename;

                cout << "Enter the ticket holder surname: " << endl;
                cin >> surname;

                cout << "1.Standard: €9.50" << endl;
                cout << "2.Comfort: €13.50" << endl;
                cout << "3.Reduced: €7.00" << endl;
                cout << "Enter your choice";
                cin >> ticketChoice;

                switch (ticketChoice)
                {
                case 1:
                    cout << "Standard ticket Selected" << endl;
                    cout << "Choose 2D or 3D: ";
                    cin >> selection;

                    if (selection == "2D")
                    {
                        price = 9.50;
                    }
                    else if (selection == "3D")
                    {
                        price = 12.00;
                    }
                    else
                    {
                        cout << "Invalid Selection!" << endl;
                    }

                    break;
                case 2:
                {
                    cout << "Comfort ticket Selected" << endl;
                    cout << "comfort ticket price: " << endl;
                    cout << "Do you want a snack package? (yes = 1, no = 0)";

                    cin >> snackPackage;
                    price = 13.50;
                    if (snackPackage)
                    {
                        price = price + 4.50;
                    }

                    break;
                }
                case 3:
                {
                    cout << "Reduced ticket Selected" << endl;
                    cout << "Enter your student ID: ";
                    cin >> studentID;

                    if (studentID.empty())
                    {
                        cout << "Student ID is required!" << endl;
                    }
                    else
                    {
                        price = 7.00;
                    }

                    break;
                }
                default:
                    cout << "Invalid ticket choice!" << endl;
                    validTicket = false;
                    break;
                }

                cout << "Enter row (1-5): ";
                cin >> row;
                if (ticketChoice == 2 && (row < 4 || row > 5))
                {
                    std::cout << "Comfort tickets are only available in Rows 4 and 5!" << endl;
                }
                else
                {
                    cout << "Enter seat (1-8): ";
                    cin >> selectedSeat;

                    if (row >= 1 && row <= 5 && selectedSeat >= 1 && selectedSeat <= 8)
                    {

                        if (seats[row - 1][selectedSeat - 1] == 0)
                        {
                            if (price <= 0)
                            {
                                cout << "invalid ticket price!" << endl;
                            }
                            else if (price > balance)
                            {
                                cout << "Insufficient voucher balance!" << endl;
                            }

                            else
                            {
                                balance = balance - price;
                                amountSpent = amountSpent + price;

                                seats[row - 1][selectedSeat - 1] = 1;

                                cout << "Ticket booked successfully!" << endl;
                                cout << "Ticket price: " << price << endl;
                                cout << "Remaining balance: " << balance << endl;

                                names[i - 1] = forename + " " + surname;
                                ticketPrices[i - 1] = price;
                                bookedRows[i - 1] = row;
                                bookedSeats[i - 1] = selectedSeat;

                                if (ticketChoice == 1)
                                {
                                    Standard ticket(forename + " " + surname, price, row, selectedSeat, selection);
                                    cout << "Standard ticket object created" << endl;
                                }

                                if (ticketChoice == 2)
                                {
                                    Comfort ticket(forename + " " + surname, price, row, selectedSeat, snackPackage);
                                    cout << "Comfort ticket object created" << endl;
                                }

                                if (ticketChoice == 3)
                                {
                                    ReducedTicket ticket(forename + " " + surname, price, row, selectedSeat, studentID);
                                    cout << "Reduced ticket object created" << endl;
                                }
                            }
                        }
                        else
                        {
                            cout << "Seat is already booked. Choose another seat." << endl;
                        }
                    }
                    else
                    {
                        cout << "Invalid row or seat number! " << endl;
                    }
                }
            }
        }
        break;

        case 4:

            cout << "Total amount spent: " << amountSpent << endl;
            cout << "Remaining balance: " << balance << endl;
            break;

        case 5:
            cout << "\n--- Booking Summary ---" << endl;
            for (int i = 0; i < 4; i++)
            {
                if (ticketPrices[i] > 0)
                {
                    cout << "Ticket holder: " << names[i] << endl;
                    cout << "Ticket price: " << ticketPrices[i] << endl;
                    cout << "Row: " << bookedRows[i] << endl;
                    cout << "Seat: " << bookedSeats[i] << endl;
                    cout << "Ticket price: " << ticketPrices[i] << endl;
                    cout << "-------------------------------" << endl;
                }
            }
            break;
        case 6:
            cout << "Exit the program!" << endl;
            break;

        default:
            cout << "Please select a valid choice!" << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}