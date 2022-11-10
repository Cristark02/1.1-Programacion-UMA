#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Introduzca el primer número entero: ";
    cin >> num1;
    cout << "Introduzca el segundo número entero: ";
    cin >> num2;

    int suma = num1 + num2;

    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;
    cout << "Resultado (num1 + num2): " << suma << endl;
}

/*  
    a) -20 y 30, el resultado de la suma es 10, pese a ser una suma,
    el resultado es menor debido al simbolo negativo del num1.
    
    b) 20 y -30, el resultado de la suma es -10, el resultado es
    negativo debido a que el mayor dato es el que porta el simbolo negativo.

    c) 147483647 y 2000000000, el resultado de la suma es 2147483647.
 
    d) 200000000 y 2000000000, el resultado de la suma es 400000000.

    e) 1 y 2147483647, en este caso el resultado es -2147483647 debido
    a que el valor maximo de un unetero (int) es de -2147483648 a 2147483647, por lo
    que simplemente reincia el contador de int al sumarle 1 al limite

    f) 1 y 3000000000, en este caso, el programa reconoce 3000000000 como 2147483647
    por el limite de int, por lo que el resultado es el mismo que en el
    apartado anterior, -2147483648

 */