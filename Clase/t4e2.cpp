#include <iostream>
#include <array>
using namespace std;

const int MAX = 10;

typedef array < int, MAX > Tarray;

bool buscar (int num, const Tarray& a)
{
    int i = 0;
    while ((i < MAX) && (num != a[i]))
        i++;
    return (i < MAX);
}

void leer_datos (Tarray& a)
{
    cout << "Introduzca 10 numeros enteros: ";
    for (int i = 0; i < MAX; i++)
    {
        cin >> a[i];
    }
}

void leer_num (int& num)
{
    cout << "Introduzca el numero a buscar: ";
    cin >> num;
}

int main ()
{
    Tarray a;
    int num;
    leer_num (num);
    leer_datos (a);
    if (buscar(num, a))
    {
        cout << "El numero " << num << " SI esta en la coleccion" << endl;
    }
    else
    {
        cout << "El numero " << num << " NO esta en la coleccion" << endl;
    }
}