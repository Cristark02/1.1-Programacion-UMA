#include <iostream>

using namespace std;

const double IVA = 0.12;
const double DESCUENTO = 0.05;

int main()
{
    double unidad, precio, total, descontado;

    cout << "Introduzca la cantidad de unidades adquiridas: ";
    cin >> unidad;
    cout << "Introduzca el precio de la unidad: ";
    cin >> precio;

    total = unidad*precio+(unidad*precio*IVA);

    if (total >= 300)
    {
        cout << "Se aplica el descuento de 5%\n";
        descontado = total -(total*DESCUENTO);
        cout << "El precio total a pagar es: " << descontado << " €";
    }
    else
    {
        cout << "El precio total a pagar es: " << total << " €";
    }
}
