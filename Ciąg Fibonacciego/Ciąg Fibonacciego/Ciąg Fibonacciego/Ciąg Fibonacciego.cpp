#include<iostream>
using namespace std;

//CF - Ciąg Fibonacciego

void Ciąg_Fibonacciego(int CF)
{
    cout << 0;
    cout << ",";
    int a = 0;
    int b = 1;
    for (int i = 0; i < CF; i++)
    {
        cout << endl;
        cout << b << ", ";
        b += a;
        a = b - a;
    }
    cout << ".";
}
int main()
{
    int CF;
    cout << "Jak długi ma zostać wyświetlony ciąg Fibonacciego?? (Podaj wartość z ilu znaków ma być Ciąg Fibonacciego): ";
    cin >> CF;
    Ciąg_Fibonacciego(CF);
    return 0;
}