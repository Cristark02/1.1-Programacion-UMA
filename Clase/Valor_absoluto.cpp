#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Introduzca un número\n";
    cin >> x;
    if (x < 0)
    {
        x = -x;
    }
    cout << "El valor absoluto de su número es: " << x;

    return 0;

}