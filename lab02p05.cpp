#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ile razy wypisac? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": c++" << endl;
    }
    // for (int i = 100; i > 0; i--)
    //     cout << i << "\t";
    return 0;
}