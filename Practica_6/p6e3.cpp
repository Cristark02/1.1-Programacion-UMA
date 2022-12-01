#include <array>
#include <iostream>
using namespace std;
const int MAX = 10;
typedef array < int, MAX > Cadena;

void mostrar (Cadena& v)
{
    cout << "La frecuencia de cada digito es: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << i << " : " << v[i] << endl;
    }
}

void leer (Cadena& v)
{
    int n;
    cout << "Introduzca una secuencia de numeros (hasta negativo): ";
    cin >> n;
    while (n >= 0)
    {
        v[n]++;
        cin >> n;
    }
}

int main ()
{
    Cadena v = {0};
    leer (v);
    mostrar (v);
}