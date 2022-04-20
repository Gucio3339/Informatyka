using namespace std;

#include <iostream>

void Szyfr_Cezara(char słowo[], int k)
{
    if (k >= -26 && k <= 26)
    {
        int d = strlen(słowo);
        if (k >= 0)
        {
            for (int i = 0; i < d; i++)
            {
                if (słowo[i] + k <= 'z')
                {
                    słowo[i] += k;
                }
                else
                {
                    słowo[i] = słowo[i] + k - 26;
                }
            }
        }
        else if (k < 0)
        {
            for (int i = 0; i < d; i++)
            {
                if (słowo[i] + k >= 'a')
                {
                    słowo[i] += k;
                }
                else
                {
                    słowo[i] = słowo[i] + k + 26;
                }
            }
        }
    }
    cout << słowo;
}
int main()
{
    char tab[1000];
    int klucz;
    cout << "Podaj słowo (UWAGA! WYMAGANE MAŁE LITERY): ";
    cin >> tab;
    cout << "Podaj klucz(UWAGA! NALEŻY PODAĆ CYFRĘ): ";
    cin >> klucz;
    cout << "Wynik po Zaszyfrowaniu: ";  Szyfr_Cezara(tab, klucz);
    cout << endl;
    cout << "Wynik po Rozszyfrowaniu:  ";  Szyfr_Cezara(tab, -klucz);
}