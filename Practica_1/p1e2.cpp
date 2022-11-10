#include <iostream>

using namespace std;

const double TASA = 25.0;
const double PRECIOS_HORA = 60.0;

int main ()
{
    double horas, dias, total, neto;
    cout << "Introduzca las horas trbajadas: ";
    cin >> horas;
    cout << "Introduzca los dias trabajados: ";
    cin >> dias;
    total = horas*dias*PRECIOS_HORA;
    neto = total-TASA;
    cout << "El valor total a pagar es: " << total << "\n";
    cout << "El valor neto a pagar es: " << neto << "\n";

    return 0;
}
