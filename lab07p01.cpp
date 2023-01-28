#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba ktos;
    ktos.imie = "Jan";
    ktos.nazwisko = "kowalski";
    ktos.wiek = 20;

    cout << "Imie: " << ktos.imie
         << " Nazwisko: " << ktos.nazwisko
         << " Wiek: " << ktos.wiek;
    return 0;
}