#include <iostream>
#include <array>
using namespace std;

const int MAX_FILAS = 5;
const int MAX_COLMS = 7;

typedef array < int, MAX_COLMS > Filas;
typedef array < Filas, MAX_FILAS > Matriz;

void pos (const Matriz& n, int comp)
{
    for (int i = 0; i < int(n.size()); i++)
    {
        for (int j = 0; j < int(n[i].size()); j++)
        {
            if (comp == n[i][j])
            {
                cout << "El numero " << n[i][j] << " es el mayor elemento de la matriz" << endl;
                cout << "Se encuentra en [" << i << "][" << j << "]";
            }
        }
    }
}

void buscar_mayor (const Matriz& n)
{
    int comp = n[0][0];
    for (int i = 0; i < int(n.size()); i++)
    {
        for (int j = 0; j < int(n[i].size()); j++)
        {
            if (n[i][j] > comp)
                comp = n[i][j];
        }
    }
    cout << endl;
    pos (n, comp);
}

void leer (Matriz& n)
{
    cout << "Introduzca "<< MAX_FILAS << " filas de " << MAX_COLMS << "numeros" << endl;
    for (int i = 0; i < int(n.size()); i++)
    {
        for (int j = 0; j < int(n[i].size()); j++)
        {
            cin >> n[i][j];
        }
    }
}

int main ()
{
    Matriz n;
    leer (n);
    buscar_mayor (n);
}