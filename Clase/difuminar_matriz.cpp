#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

const int NFILAS = 3;
const int NCOLUMS = 4;
typedef array < int, NCOLUMS > Fila;
typedef array < Fila, NFILAS > Matriz;
void leer (Matriz& m)
{
    cout << "Introduzca" << m.size();
}

int main ()
{
    Matriz m;
    leer (m);
}
