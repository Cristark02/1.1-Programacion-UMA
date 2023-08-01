#include <iostream>
#include <array>
using namespace std;

const int F = 3;
const int C = 2;

typedef array < int, C > TFila;
typedef array < TFila, F > TMatriz_M;
typedef array < TFila, F > TMatriz_T;

void const_matriz_T(const TMatriz_M& m, TMatriz_T& t)
{

}

void leer(TMatriz_M& m)
{
    cout << "Introduzca la matriz M (2x3): " << endl;
    for (int f = 0; f < F; f++)
    {
        for (int c = 0; c < C; c++)
        {
            cin >> m[f][c];
        }
    }
}

int main ()
{
    TMatriz_M m;
    TMatriz_T t = {{}}; // t se inicializa toda a 0

    leer (m);
    const_matriz_T (m, t);
}
