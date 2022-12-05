#include <iostream>
#include <array>
using namespace std;

const int N = 5;
const int NUM_VALORES = N*N;

typedef array < int, N > Fila;
typedef array < Fila, N > Matriz;
typedef array < bool, NUM_VALORES + 1 > Rango;

int suma_fila (const Fila& fila)
{
    int suma = 0;
    for (int f = 0; f < N; f++)
        suma += fila[f];
    return suma;
}

int suma_colums (const Matriz& m, int f)
{
    int suma = 0;
    for (int c = 0; c < N; c++)
        suma += m[c][f];
    return suma;
}

int suma_diag_sup(const Matriz& m)
{
    int suma = 0;
    for (int s = 0; s < N; s++)
        suma += m[s][s];
    return suma;
}

int suma_diag_inf(const Matriz m)
{
    int suma = 0;
    for (int i = 0; i < N; i++)
        suma += m[(N - 1) - i][i];
    return suma;
}

bool comp_filas (const Matriz& m, int v)
{
    int f = 0;
    while ((f < N) && (v == suma_fila(m[f])))
    {
        f++;
    }
    return (f >= N);
}

bool comp_colums (const Matriz& m, int v)
{
    int c = 0;
    while ((c < N) && (v == suma_colums(m, c)))
    {
        c++;
    }
    return (c >= N);
}

bool comp_diag (const Matriz& m, int v)
{
    return ((v == suma_diag_sup(m)) && (v == suma_diag_inf(m)));
}

bool comp_rango (const Matriz& m)
{
    Rango rango = {{}};
    bool bien = true;
    int i, j;

    i = 0;
    while ((i < N) && bien)
    {
        j = 0;
        while ((j < N) && bien)
        {
            if ((1 <= m[i][j]) && (m[i][j] <= NUM_VALORES) && (!rango[m[i][j]]))
                rango[m[i][j]] = true;
            else
                bien = false;
            j++;
        }
        i++;
    }
    return bien;
}

bool esMagico (const Matriz& m)
{
    int valor = suma_fila(m[0]);

    return comp_filas (m, valor) && comp_colums (m, valor) && comp_diag(m, valor) && comp_rango (m);

}

void leer (Matriz& m)
{
    cout << "Introduzca "<< N << " filas de " << N << " numeros" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m[i][j];
        }
    }
}

int main ()
{
    Matriz m;
    leer (m);
    if (esMagico(m))
    {
        cout << "SI es magico" << endl;
    }
    else
    {
        cout << "NO es magico" << endl;
    }
    return 0;
}
