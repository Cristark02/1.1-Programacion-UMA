#include <iostream>
#include <array>
using namespace std;

const int MAX_FILAS = 5;
const int MAX_COLMS = 5;

typedef array < int, MAX_COLMS > Filas;
typedef array < Filas, MAX_FILAS > Matriz;

void buscar_simetrico (const Matriz& n)
{
    bool simetrica = false;
    for (int i = 0; i < MAX_FILAS; i++)
    {
        for (int j = i+1; j < MAX_COLMS - 1; j++)
        {
            if (n[i][j] == n[j][i])
                simetrica = true;
            else
                return;
        }
    }
}

void leer (Matriz& n)
{
    cout << "Introduzca "<< MAX_FILAS << " filas de " << MAX_COLMS << "numeros" << endl;
    for (int i = 0; i < MAX_FILAS; i++)
    {
        for (int j = 0; j < MAX_COLMS; j++)
        {
            cin >> n[i][j];
        }
    }
    cout << endl;
}

int main ()
{
    Matriz n;
    leer (n);
    buscar_simetrico(n);
}