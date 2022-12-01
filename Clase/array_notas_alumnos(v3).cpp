#include <iostream>
#include <array>

const int MAX_ALUMNOS = 20;

typedef array<double, MAX_ALUMNOS > Datos;
struct Notas
{
    int nelms = 0;
    Datos elm;
};

void anyadir ()
//copiar de foto