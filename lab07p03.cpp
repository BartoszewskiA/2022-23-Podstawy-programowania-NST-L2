#include <iostream>
#include <time.h>

using namespace std;

struct RGB
{
    int R;
    int G;
    int B;
} kolory[100];

RGB losuj();

int main()
{
    srand(time(NULL));
    int n = 0;
    cout << "Podaj n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        kolory[i] = losuj();

    for (int i = 0; i < n; i++)
        cout << "R=" << kolory[i].R
             << " G=" << kolory[i].G
             << " B=" << kolory[i].B << endl;
    return 0;
}

RGB losuj()
{
    RGB kolor;
    kolor.R = rand() % 256;
    kolor.G = rand() % 256;
    kolor.B = rand() % 256;
    return kolor;
}
