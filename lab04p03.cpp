#include <iostream>
#include <time.h>

using namespace std;

void losuj(int poczatek = 0, int koniec = 100);
void wypisz();
int suma_elementow();
bool czy_wystepuje(int x);
bool czy_wystepuje_V2(int x);
int ile_razy_wystepuje(int x);
int minimum();
int maksimum();
void usun_element(int poz);
void dodaj_element(int poz, int co);

int tab[1000];
int n = 0; // zajety obszar tablicy

int main()
{
    srand(time(NULL));
    int a, b;
    cout << "n=";
    cin >> n;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    losuj(a, b);
    wypisz();
    dodaj_element(4,100);
    wypisz();
    return 0;
}

void losuj(int poczatek, int koniec)
{
    for (int i = 0; i < n - 1; i++)
        tab[i] = rand() % (koniec - poczatek + 1) + poczatek;
}

void wypisz()
{
    cout << endl
         << "------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl
         << "------------------------------------------------" << endl;
}

int suma_elementow()
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += tab[i];
    }
    return suma;
}

bool czy_wystepuje(int x)
{
    bool znaleziono = false;
    for (int i = 0; i < n; i++)
        if (tab[i] == x)
        {
            znaleziono = true;
            break;
        }
    return znaleziono;
}

bool czy_wystepuje_V2(int x)
{
    for (int i = 0; i < n; i++)
        if (tab[i] == x)
        {
            return true;
        }
    // jezeli tu dotarles to wartosci nie znaleziono
    return false;
}

int ile_razy_wystepuje(int x)
{
    int ile = 0;
    for (int i = 0; i < n; i++)
        if (tab[i] == x)
        {
            ile++;
        }
    return ile;
}

int minimum()
{
    // int min = INT16_MAX;
    int min = tab[0];
    for (int i = 1; i < n; i++)
        if (tab[i] < min)
            min = tab[i];
    return min;
}

int maksimum()
{
    // int max = INT16_MIN;
    int max = tab[0];
    for (int i = 1; i < n; i++)
        if (tab[i] > max)
            max = tab[i];
    return max;
}

void usun_element(int poz)
{
    for (int i = poz; i < n - 1; i++)
        tab[i] = tab[i + 1];
    n--;
}

void dodaj_element(int poz, int co)
{
    for (int i = n - 1; i > poz; i--)
        tab[i] = tab[i - 1];
    n++;
    tab[poz] = co;
}