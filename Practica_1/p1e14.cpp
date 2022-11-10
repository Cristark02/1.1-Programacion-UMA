#include <iostream>

using namespace std;

int main()
{
    int num11 = -7;
    int num12 = 4;
    double num13 = num11 + num12;

    cout << "Valor de número11 (int): " << num11 << endl;
    cout << "Valor de número12 (int): " << num12 << endl;
    cout << "Valor de número13 (double) (num11 + num12): " << num13 << " CORRECTO" << endl;

    /*
        En este primer caso el resultado del double es una simple suma entre los int,
        siendo el resultado negativo debido al signo negativo del primer dato.
    */

    int num21 = -7;
    unsigned num22 = 4;
    double num23 = num21 + num22;

    cout << "Valor de número21 (int): " << num21 << endl;
    cout << "Valor de número22 (unsigned): " << num22 << endl;
    cout << "Valor de número23 (double) (num21 + num22): " << num23 << " ERROR" << endl;

    /*
        En este segundo caso el resultado del double da un resultado erroneo y exagerado debido
        a la variable es unsigned, ya que no le indica ni ningún tipo de signo ni si es un
        int, float, o double, por lo que el codigo no comprende que es el dato num22.
    */

}