using namespace std;
#include <iostream>

//SC - Szyfr Cezara

void Szyfr_Cezara(char słowo[], int SC)
{
    if (SC >= -26 && SC <= 26)
    {
        int d = strlen(słowo);
        if (SC >= 0)
        {
            for (int i = 0; i < d; i++)
            {
                if (słowo[i] + SC <= 'z')
                {
                    słowo[i] += SC;
                }
                else
                {
                    słowo[i] = słowo[i] + SC - 26;
                }
            }
        }
        else if (SC < 0)
        {
            for (int i = 0; i < d; i++)
            {
                if (słowo[i] + SC >= 'a')
                {
                    słowo[i] += SC;
                }
                else
                {
                    słowo[i] = słowo[i] + SC + 26;
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