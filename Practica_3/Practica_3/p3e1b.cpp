#include <iostream>

using namespace std;

int main ()
{
    int n, i, suma;
    cout << "Introduzca un número: ";
    cin >> n;

    if (n < 0)
        cout << "Error";
    else
    {
        i = 1;
        suma = 0;
        while (i <= n)
        {
            suma = suma + i;
            i++;
        }
        cout << "La suma es: " << suma;
    }
    return 0;
}
