#include <iostream>

using namespace std;

int main()
{
    int x, y ,z, mayor;
    cout << "Introduce 3 numeros\n";
    cin >> x >> y >> z;
    if (x >= y && x >= z)
    {
        mayor = x;
    }
    else if (y >= x && y >= z)
    {
        mayor = y;
    }
    else
    {
        mayor = z;
    }
    cout << "el mayor es " << mayor;

    return 0;
}