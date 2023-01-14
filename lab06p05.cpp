#include <iostream>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;

int main()
{
    srand(time(NULL));
    fstream plik;
    // przygotowanie tablicy wyrazow
    string slownik[100];
    int n = 0;
    plik.open("slownik.txt", ios::in);
    while (!plik.eof())
    {
        getline(plik, slownik[n]);
        n++;
    }
    plik.close();
    // otwieramy plik wynikowy
    plik.open("wynik.txt", ios::out);
    int nr_wyrazu;
    int l_wyrazow = rand() % 8000 + 1000;
    for (int i = 0; i < l_wyrazow; i++)
    {
        nr_wyrazu = rand() % n; // losujemy pole w tablicy
        plik << slownik[nr_wyrazu];
        if (rand() % 100 < 95)
            plik << " ";
        else
            plik << "." << endl;
    }
    plik.close();
    return 0;
}