#include <iostream>

using namespace std;

int main()
{
    bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
    cout << "Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): "
    << boolalpha << ok << " -> ERROR" << endl;
}

/*
    En el ejercicio se puede observar un booleano que consta de dos operaciones ,
    su ejecución resulta en error debido al cambio de prioridades en las operaciones,
    ya que no puede cumplirse la propiedad asociativa, entonces no se puede aplicar
    el operador == puesto que en este caso no se cumple la igualdad, entonces,
    el bool da como resultado, false, o lo que es lo mismo, error.
*/