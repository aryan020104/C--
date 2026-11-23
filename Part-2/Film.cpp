#include <iostream>
#include <string>
using namespace std;

class Film
{
public:
    string title;
    string genre;
    int year;
    Film *Successor;

    Film(string t, string g, int y) : title(t), genre(g), year(y), Successor(nullptr)
    {
    }
};

class FilmList
{
private:
    Film *Beginning;
    Film *End;

public:
    FilmList() : Beginning(nullptr), End(nullptr)
    {
    }

    void add(Film *newFilm)
    {

        newFilm->Successor = nullptr;
        if (Beginning == nullptr)
        {
            Beginning = newFilm;
            End = newFilm;
        }
        else
        {
            End->Successor = newFilm;
            End = newFilm;
        }
    }

    void Display()
    {
        Film *current = Beginning;
        while (current != nullptr)
        {
            cout << "Film title: " << current->title << endl;
            cout << "Film year: " << current->year << endl;
            cout << "Film genre: " << current->genre << endl;

            current = current->Successor;
        }
    }

    void clearList()
    {
        Film *current = Beginning;
        while (current != nullptr)
        {
            Film *temp = current;
            current = current->Successor;
            delete temp;
        }
        Beginning = nullptr;
        End = nullptr;
    }

    ~FilmList()
    {
        clearList();
    }
};

int main()
{
    FilmList mylist;

    mylist.add(new Film("Inception", "Sci-fi", 2010));
    mylist.add(new Film("Intersteller", "Sci-fi", 2014));
    mylist.add(new Film("The Dark Knight", "Action", 2008));

    mylist.Display();
    return 0;
}