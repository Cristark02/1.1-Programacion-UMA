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
        i = 0;
        suma = 0;
        do
        {
            suma = suma + i;
            i++;
        }while(i <= n);
        cout << "La suma es: " << suma;
    }
    return 0;
}
