#include <iostream>

using namespace std;

int main()
{
    int w, k;
    cout << "wierszy=";
    cin >> w;
    cout << "kolumn=";
    cin >> k;
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <=k; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}