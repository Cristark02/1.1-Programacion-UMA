#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 14;
    int auxiliar;

    cout << "a vale " << a << " y b vale " << b << endl;
    // ¿Qué hacen estas tres sentencias?

    auxiliar = a;
    a = b;
    b = auxiliar;

    cout << "a vale " << a << " y b vale " << b << endl;

}

/*La funcionalidad de este programa se basa en el intercambio
de dos datos entre si, donde el dato original de la primera variable,
en este caso, la variable 'a', se traspasa a la segunda variable, 
en este caso, la variable 'b', y viciversa, el dato original
de la variable 'b' pasa a la variable 'a', todo con la
ayuda de una variable auxiliar que toma el valor de una
variable, ya que al sustituir un dato por otro el anterior
se elimina, y pasandosela a la otra variable, despues de haber pasado
los datos de la segunda la primera*/