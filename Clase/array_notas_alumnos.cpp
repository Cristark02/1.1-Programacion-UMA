#include <iostream>
#include <array>
using namespace std;

const int NALUMNOS = 20;
typedef array <double, NALUMNOS > Notas;
//COMPLETAR FOTOS MOVIL 
void mostrar_resultado (const Notas& notas, double media)
{

}

double calc_media (const Notas& notas)
{
    double suma = 0;
    for (int i = 0; i < int (notas.size()); i++)
    {
        suma += notas[i];
    }
    return suma/double (notas.size());
}

void leer (Notas& notas)
{
    cout << "Introduce tu nota: ";
    cin >> notas;
}

int main ()
{
    Notas notas;
    leer (notas);
    double media = calc_media (notas);
    mostrar_resultado (notas, media);
}