#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    cout << "Introduce unos numericos\n";
    cin >> x >> y;
    int aux;
    aux = x;
    x = y;
    y = aux;
    cout << "X ahora es " << x << "\nY ahora es " << y;


    return 0;
}