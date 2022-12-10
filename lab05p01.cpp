#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab_01[1000];
    int tab_02[1000];
    int n;
    cout << "Ile elementow: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        tab_01[i] = rand() % 201 - 100;
        tab_02[i] = rand() % 201 - 100;
    }

    for (int i = 0; i < n; i++)
        cout << tab_01[i] << " ";

    cout << endl
         << endl;
         
    for (int i = 0; i < n; i++)
        cout << tab_02[i] << " ";
    return 0;
}