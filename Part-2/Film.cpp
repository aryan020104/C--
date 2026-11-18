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

    void Display(){
        Film* current = Beginning;
        while (current!= nullptr)
        {
        
        }
        
    }
};