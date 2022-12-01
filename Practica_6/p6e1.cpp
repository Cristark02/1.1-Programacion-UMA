// solucionar el error de que en la lista solo presenta el 2

#include <iostream>
#include <array>
using namespace std;
const int NELEMEN = 5;
typedef array < double, NELEMEN > Vector;

void mostrar (const Vector& v, double mayor)
{
    cout << "el mayor elemento de la lista es " << mayor << endl;
    cout << "Lista: ";
    for (int i = 0; i < int(v.size()); i++)
    {
        cout << v[1] << " ";
    }
}

double comp_mayor (const Vector& v)
{
    int i = 0;
    double mayor = v[i];
    while (i < int(v.size()))
    {
        if (v[i] > mayor)
        {
            mayor = v[i];
        }
        i++;
    }
    return mayor;
}

void leer (Vector& v)
{
    cout << "Introduzca 5 numeros: ";
    for (int i = 0; i < int(v.size()); i++)
    {
        cin >> v[i];
    }
}

int main ()
{
    Vector num;
    leer (num);
    double mayor = comp_mayor (num);
    mostrar (num, mayor);
}
