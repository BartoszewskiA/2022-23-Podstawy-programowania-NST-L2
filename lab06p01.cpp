#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char znak;
    int ile = 0;
    cout << "Podaj tekst: ";
    getline(cin, s);
    cout << "Jakiego znaku szukasz: ";
    znak = getchar();
    for (int i = 0; i < s.length(); i++)
        if (toupper(s[i]) == toupper(znak))
            ile++;
    cout << "Znak \"" << znak << "\" wystapil " << ile << " razy";
    return 0;
}