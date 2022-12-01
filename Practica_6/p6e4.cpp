#include <iostream>
#include <array>
using namespace std;

const int MAX = 10;
typedef array < int, MAX > Histograma;

void lista (int x)
{
    for (int i = 0; i <= x; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

unsigned tomar_mayor (const Histograma& v)
{
    unsigned mayor = v[0];
    for (int i = 0; i < 10; i++)
    {
        if (v[i] > mayor)
            mayor = v[i];
    }
    return mayor;
}

void imprimir_frecuencias (Histograma& v, int mayor)
{
    int a = mayor;
    for (int i = 0; i < mayor; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if (v[j] == a)
            {
                cout << "* ";
                v[j] = v[j]-1;
            }
            else
            {
                cout << "  ";
            }
        }
        a = tomar_mayor (v);
        cout << endl;
    }
}

void guiones (int x)
{
    for (int i = 0; i <= x; i++)
        cout <<"-";
    cout << endl;
}

void leer (Histograma& v)
{
    int n;
    cout << "Introduce una secuencia de numeros (hasta negativos): ";
    cin >> n;
    while (n >= 0)
    {
        v[n]++;
        cin >> n;
    }
}

void inicializar_frecuencia (Histograma& v)
{
    for (int i = 0; i < 10; i++)
    {
        v[i] = 0;
    }
}

int main ()
{
    int n = 9;
    Histograma v;
    inicializar_frecuencia (v);
    leer (v);
    guiones (n);
    imprimir_frecuencias (v, tomar_mayor (v));
    lista (n);
    guiones (n);
}