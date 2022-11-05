#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, s = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x >= 0)
        {
            i++;
            s += x;
        }
    } while (x >= 0);
    if (i != 0)
    {
        double sr = (double)s / i;
        cout << "Srednia=" << sr;
    }
    else
        cout << "brak danych";
    return 0;
}