#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};
osoba tab[3];
int n = 3;

void wypisz();

int main()
{
    string s;
    for (int i = 0; i < 3; i++)
    {
        cout << "Podaj imie: ";
        getline(cin, tab[i].imie);
        cout << "Podaj nazwisko: ";
        getline(cin, tab[i].nazwisko);
        cout << "Podaj wiek: ";
        getline(cin, s);
        tab[i].wiek = atoi(s.c_str());
    }
    wypisz();
    return 0;
}

void wypisz()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Imie: " << tab[i].imie
             << "  Nazwisko: " << tab[i].nazwisko
             << "  Wiek: " << tab[i].wiek
             << endl;
    }
}