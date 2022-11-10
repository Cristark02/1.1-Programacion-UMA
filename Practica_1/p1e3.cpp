#include <iostream>

using namespace std;

int main()
{
    int num_1, num_2;
    cout << "Introduce un numero entero: ";
    cin >> num_1;
    cout << "Introduce otro numero entero: ";
    cin >> num_2;

    cout << "El valor del primer numero introducido es: " << num_1 << "\n";
    cout << "El valor del segundo numero introducido es: " << num_2 << "\n";

    return 0;

    /*Cuando se introducen numeros enteros en el programa, este funciona
    tal y como se espera, pero al introducir cualquier dato que no sea un
    numero entero, como unos caracteres, este da como resultado erroneo,
    como 0 o 1, causando tambien que no se lean mas numeros enteros en el
    resto del codigo */
}
