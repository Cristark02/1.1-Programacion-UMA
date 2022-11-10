#include <iostream>

using namespace std;

int main()
{
    int num11 = -7;
    int num12 = 4;

    cout << "Valor de número11 (int): " << num11 << endl;
    cout << "Valor de número12 (int): " << num12 << endl;

    if (num11 < num12)
    {
        cout << "El valor " << num11 << " es menor que el valor " << num12
        << " CORRECTO" << endl;
    }
    else
    {
        cout << "El valor " << num11 << " NO es menor que el valor " << num12
        << " ERROR" << endl;
    }

    /*
        En este primer caso se comprueba a traves de un if si el primer valor es menor al
        segundo, siendo en este caso positivo.
    */

    //-------------------------------------------------------------------------

    int num21 = -7;
    unsigned num22 = 4;

    cout << "Valor de número21 (int): " << num21 << endl;
    cout << "Valor de número22 (unsigned): " << num22 << endl;

    if (num21 < num22)
    {
        cout << "El valor " << num21 << " es menor que el valor " << num22
        << " CORRECTO" << endl;
    }
    else
    {
        cout << "El valor " << num21 << " NO es menor que el valor " << num22
        << " ERROR" << endl;
    }

    /*
        En este segundo caso se comprueba a traves de un if si el primer valor es menor al
        segundo, siendo en este caso negativo debido a que la variable unsigned no indica ningún tipo de signo ni si es un
        int, float, o double, por lo que el codigo no comprende que es el dato num22.
    */
}