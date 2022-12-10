#include <iostream>
#include <time.h>

using namespace std;
void wypisz(int tab[], int n);
void losuj(int tab[], int n);

int main()
{
    bool flaga = false;
    srand(time(NULL));
    int tab_01[1000];
    int tab_02[1000];
    int n;
    cout << "Ile elementow: ";
    cin >> n;
    losuj(tab_01, n);
    losuj(tab_02, n);
    for (int i = 0; i < n; i++)
    {
        if (tab_01[i] == tab_02[i])
        {
            cout << "[" << i << "]=" << tab_01[i] << "\t";
            flaga = true;
        }
    }
    if (!flaga) // flaga == false
        cout << "Brak dopasowan";

    // wypisz(tab_01, n);
    // wypisz(tab_02, n);
}

void wypisz(int tab[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}

void losuj(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 201 - 100;
    }
}