#include <iostream>

using namespace std;

int main()
{
//    int wybor;

    int Ile_Liczb = 0;

    int Ile_Liczb_Pierwszych = 0;

    int Liczby_Naturalne = 2;

    int Dzielnik = 2;


    cout << "Ile Liczb Pierwszych należy wyświetlić? Proszę podać ilość: ";
    cin >> Ile_Liczb;
    cout << endl << "Oto Liczby Pierwsze: ";

//    switch (wybor) {
//    case 1:
//        cout << "Oto liczby pierwsze: ";
//
//        break;
//    }


        while (Ile_Liczb_Pierwszych < Ile_Liczb)
        {
            while (Dzielnik < Liczby_Naturalne)
            {
               if (Liczby_Naturalne % Dzielnik == 0)
                {
                    Dzielnik = 2;
                    Liczby_Naturalne++;
                }
                Dzielnik++;
            }
            if (Dzielnik >= Liczby_Naturalne)
            {
                cout << Liczby_Naturalne << ", ";
                Dzielnik = 2;
                Liczby_Naturalne++;
                Ile_Liczb_Pierwszych++;
            }
        }
        cout << ".";
}