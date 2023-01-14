#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    string tab[300];
    int n = 0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]); // wczytuje linie do tablicy
        n++;
    }
    plik.close();
    // wypisuje tablice na ekran
    for (int i = 0; i < n; i++)
        cout << tab[i] << endl;
    // zapis
    plik.open("dane.txt", ios::out);
    for (int i = 0; i < n; i++) // zapisuje tablice do pliku
        if (tab[i].length() > 0)
            plik << i + 1 << ") " << tab[i] << endl;
    plik.close();

    return 0;
}