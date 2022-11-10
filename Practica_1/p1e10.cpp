#include <iostream>

using namespace std;


int main ()
{
    double nota_teoria, nota_practica;
    
    cout << "Introduce la nota de teoria: ";
    cin >> nota_teoria;
    cout << "Introduce la nota de practica: ";
    cin >> nota_practica;

    double nota_final = (nota_teoria * 7/10) + (nota_practica * 3/10); 
    cout << "La calificacion es: " << nota_final;

    return 0;
}