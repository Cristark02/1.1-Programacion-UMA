#include <iostream>
#include <array>
using namespace std;
const int N = 5;
const int NUM_VALORES = N*N;
typedef array<int,N> Fila;

typedef array<Fila,N> Cuadrado;

void incrementar(int& v)
{
    v = (v + 1) % N;
}
void decrementar(int& v)
{
    v = (v - 1 + N) % N;
}
void next_coord(const Cuadrado& m, int& x, int& y)
{
    decrementar(x);
    decrementar(y);
    if (m[x][y] != 0)
    {
        incrementar(y);
        incrementar(x);
        incrementar(x);
    }
}
void construirMagico(Cuadrado& m)
{
    int x = 0, y = N/2;
    m = {{}};
    m[0][N/2] = 1;
    for (int i = 2; i <= NUM_VALORES; i++){
        next_coord(m,x,y);
        m[x][y] = i;
    }
}
void escribirMagico(const Cuadrado& m)
{
    cout << "El cuadrado magico para N = " << N << " es: "<< endl;
    for (int x = 0; x < N; x++){
        for (int y = 0; y < N; y++){
            cout << m[x][y] << ' ';
        }
            cout << endl;

    }
}
int main()
{
    Cuadrado m;
    construirMagico(m);
    escribirMagico(m);
    return 0;
}