#include <iostream>
#include <iomanip>

using namespace std;

const double  pst_eur = 166.386;
//las constantes se ponen fuera de las funciones

int main()
{
    int   pesetas;
    cout <<"Introduce tu cantidad de pesetas \n";
    cin >> pesetas;
    double euros = pesetas/pst_eur;
    //es mejor crear la variable y a la vez darle valor para ahorrarnos el valor basura
    //double es mas preciso que float
    cout << "Tienes " << fixed << setprecision(2) << euros << "€";

    return 0;
}