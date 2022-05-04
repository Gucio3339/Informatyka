#include <iostream>

using namespace std;

int main()
{

    int f0 = 0;
    int f1 = 1;
    int f;
    int l;

    cout << "Ile wyrazów Ciągu Wpisać: ";
    cin >> l;

    for (int i = 0; i <= l; i++)
    {
        if (i > 1)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
            cout << f << endl;
        }
        else
        {
            f = i;
            cout << f << endl;
        }
    }
}