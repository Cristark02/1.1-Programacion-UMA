#include <iostream>

using namespace std;

int main ()
{
    int n, i, suma;
    cout << "Introduzca un numero: ";
    cin >> n;

    if (n < 0)
        cout << "Error";
    else
    {
        suma = 0;
        for (i = 1; i <= n; i++)
            suma = suma + i;
        cout << "La suma es: " << suma;
    }
    return 0;
}
