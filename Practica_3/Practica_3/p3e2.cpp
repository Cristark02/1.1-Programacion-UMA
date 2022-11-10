#include <iostream>

using namespace std;

int main()
{
    double num_modelo, precio, i, suma;
    cout << "Introduzca numero de modelos de coches: ";
    cin >> num_modelo;

    suma = 0;
    for (i = 1; i <= num_modelo; i++)
    {
        cout << "Precio modelo " << i << ": ";
        cin >> precio;
        suma = suma + precio;
    }
    cout << "El valor medio de los " << num_modelo;
    cout << " modelos de coche asciende a: " << suma/num_modelo << " �";

    return 0;
}
