#include <iostream>

using namespace std;

int main()
{
    //Generowanie liczb pierwszych (n)
    int ile;
    cout << "Ile liczb 'n' wylosowac: ";
    cin >> ile;

    int n, i, p, lp;
    bool t;

    cin >> n;

    lp = 0;
    p = 2;
    while (lp < n)
    {
        t = true;
        for (i = 2; i < p; i++)
            if (p % i == 0)
            {
                t = false;
                break;
            }
        if (t)
        {
            cout << p << " ";
            lp++;
        }
        p++;
    }
    cout << endl;
    return 0;
}