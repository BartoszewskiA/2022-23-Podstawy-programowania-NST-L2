#include <iostream>
#include <time.h>

using namespace std;
void wypisz(int tab[], int n);
void losuj(int tab[], int n);
bool porownaj(int t_01[], int t_02[], int n);

int main()
{
    srand(time(NULL));
    int tab_01[1000];
    int tab_02[1000];
    int n;
    cout << "Ile elementow: ";
    cin >> n;
    losuj(tab_01, n);
    losuj(tab_02, n);
    if (porownaj(tab_01, tab_02, n) == false)
        cout <<"brak dopasowan";

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

bool porownaj(int t_01[], int t_02[], int n)
{
    bool flaga = false;
    for (int i = 0; i < n; i++)
    {
        if (t_01[i] == t_02[i])
        {
            cout << "[" << i << "]=" << t_01[i] << "\t";
            flaga = true;
        }
    }
    return flaga;
}