#include <iostream>

using namespace std;

int main()
{
    char a, b, c, d;

    cout << "Introduce un palabrta de 4 letras en miniscula: ";
    cin >> a >> b >> c >> d;

    int distancia_1 = a - int('a');
    char A = char (int ('A') + distancia_1);
    int distancia_2 = b - int('a');
    char B = char (int ('A') + distancia_2);
    int distancia_3 = c - int('a');
    char C = char (int ('A') + distancia_3);
    int distancia_4 = d - int('a');
    char D = char (int ('A') + distancia_4);

    cout << "La palabra [" << a << b << c << d << "] transformada es [" << A << B << C << D << "]";

    return 0;
}