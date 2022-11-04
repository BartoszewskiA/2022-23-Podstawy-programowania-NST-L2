#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (y != 0)
    {
        double w = (double)x / y;
        cout << x << "/" << y << "=" << w;
    }
    else
    {
        cout << "nie dziel przez zero";
    }

    return 0;
}