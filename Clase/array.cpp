#include <array>
using namespace std;

const int NALUMNOS = 100;
typedef array < double, NALUMNOS > Notas_Alumnos;
const Notas_Alumnos NOTAS = {{4.0, 5.5, 6.7, 7.8, 9.0}};

int main ()
{
    Notas_Alumnos notas = {{1, 2, 3, 4, 5}};
    for (int i = 0; i < int(notas.size()); i++)
    {
        notas [i] = notas[i]*2;
    }
}