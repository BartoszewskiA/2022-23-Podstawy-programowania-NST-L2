#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, s = 0;
    // do
    // {
    //     cout << "x=";
    //     cin >> x;
    //     if (x >= 0)
    //     {
    //         i++;
    //         s += x;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // } while (1);
    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        i++;
        s += x;
    }
    if (i != 0)
    {
        double sr = (double)s / i;
        cout << "Srednia=" << sr;
    }
    else
        cout << "brak danych";
    return 0;
}