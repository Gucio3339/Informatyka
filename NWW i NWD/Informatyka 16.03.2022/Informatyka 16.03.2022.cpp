using namespace std;

#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    int NWW;

    cout << "Podaj Pierwszą Liczbę: ";
    cin >> a;

    cout << "Podaj Drugą Liczbę: ";
    cin >> b;

    c = a * b;

    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else if (b < a)
        {
            a = a - b;
        }
    }

    NWW = c / a;

    cout << "Największy Wspólny Dzielnik wynosi: " << a << endl;
    cout << "Największa Wspólna Wielokrotność wynosi: " << NWW;
    cout << "Koniec programu.";
}