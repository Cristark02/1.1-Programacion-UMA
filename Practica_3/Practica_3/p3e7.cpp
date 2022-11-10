#include <iostream>

using namespace std;

int main ()
{
    int n, i;
    do
    {
        cout << "Introduzca el numero de fracciones: ";
        cin >> n;
    }while (n <= 0);

    double numer = 2;
    double denom = 1;
    double div;
    double suma = 1;

    i = 0;
    while (i <= n)
    {
        if (numer > denom)
        {
            denom = denom + 2;
        }
        else
        {
            numer = numer + 2;
        }
        div = numer / denom;
        suma = suma * div;
        i++;
    }

    cout << "El valor de PI con " << n << " fracciones es: " << suma * 4;

    return 0;

}