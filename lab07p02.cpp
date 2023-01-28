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
osoba tab[100];
int n = 0;

void wczytaj();
void wypisz();

int main()
{
    wczytaj();
    wypisz();
    return 0;
}

void wczytaj()
{
    fstream plik;
    plik.open("baza.txt", ios::in);
    if (!plik.good())
    {
        cout << "Brak dostepu do bazy danych";
        return;
    }
    string s;
    getline(plik, s);
    int ile = atoi(s.c_str());
    n = ile;
    for (int i = 0; i < ile; i++)
    {

        getline(plik, s);
        tab[i].imie = s;
        getline(plik, s);
        tab[i].nazwisko = s;
        getline(plik, s);
        tab[i].wiek = atoi(s.c_str());
    }
    plik.close();
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