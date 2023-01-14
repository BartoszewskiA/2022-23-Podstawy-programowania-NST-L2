#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("dane.txt", ios::in);
    if (!plik.good()) // plik.good()==false
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        if (s.length() > 0)
            cout << s << endl;
    }
    plik.close();
    return 0;
}