#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int n = 0;
    while (n<100)
    {
        cout << "x=";
        cin >> tab[n];
        if ((tab[n] <= -100 || tab[n] >= 100))
            break;
        n++;
    }
    for (int i = 0; i < 100; i++)
        cout << tab[i] << " ";
    return 0;
}