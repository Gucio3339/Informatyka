#include <iostream>

using namespace std;

int WyszukiwanieBinarne(int sz)
{
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

    int l = 0;
    int p = 15;
    int sr = (l + p) / 2;

    while (l <= p)
    {
        if (tab[sr] == sz)
        {
            return sr;
        }
        else if (tab[sr] > sz)
        {
            p = sr - 1;
        }
        else if (tab[sr] < sz)
        {
            l = sr + 1;
        }

        sr = (l + p) / 2;
    }

    return -1;
}

int main()
{
    int szukana;
    int pozycja;

    cout << "Podaj Liczbę którą chcesz znaleźć: ";
    cin >> szukana;

    pozycja = WyszukiwanieBinarne(szukana);
    cout << "Liczba " << szukana << " Występuje w zbiorze w komórce o indeksie " << pozycja;
}