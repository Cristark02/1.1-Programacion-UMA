#include <iostream>

using namespace std;

int main()
{
    char a, b, c, d;
    char w, x, y, z;
    cout << "Introduzca una palabra de 4 letras :";
    cin >> a >> b >> c >> d;
    w = a+1;
    x = b+1;
    y = c+1;
    z = d+1;
    cout << "La palabra [" << a << b << c << d << "] transformada es [" << w << x << y << z << "]";

    return 0;
}
