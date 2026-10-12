#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int secretNumber;
    int guess;
    int attempts;

    srand(time(NULL));

    secretNumber = rand() % 100 + 1;

    attempts = 0;
    guess = 0;

    while (attempts < 6 && guess != secretNumber)
    {
        cout << "Guess a number btw 1 to 100: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too small!" << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too Large!" << endl;
        }
        else
        {
            cout << "Correct! You won!" << endl;
        }
    }
    if (guess != secretNumber)
    {
        cout << "You lost!" << endl;
        cout << "Correct answer is : " << secretNumber;
    }

    return 0;
}