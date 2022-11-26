#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[1000];
    int n, a, b;
    cout << "n=";
    cin >> n;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % (b - a + 1) + a;
    }
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    return 0;
}