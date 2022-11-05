#include <iostream>

using namespace std;

int main()
{
    int x, n, ld = 0, lu = 0;
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i + 1 << "]=";
        cin >> x;
        if (x >= 0)
            ld++;
        else
            lu++;
    }
    if (ld > lu)
        cout << "Wiecej jest dodatnich";
    else if (ld == lu)
        cout << "jest tyle samo";
    else
        cout << "Wiecej jest ujemnych";
    return 0;
}