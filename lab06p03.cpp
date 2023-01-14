#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik_1, plik_2;
    string s;
    plik_1.open("dane.txt", ios::in);
    plik_2.open("wynik.txt", ios::out);
    if (!plik_1.good()) // plik.good()==false
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik_1.eof())
    {
         getline(plik_1, s);
        // plik_1 >> s;
        if (s.length() > 0)
            plik_2 << s << endl;
    }
    plik_1.close();
    plik_2.close();
    return 0;
}