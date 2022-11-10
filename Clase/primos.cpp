#include <iostream>

using namespace std;

int main ()
{
    int n;
    int cont_div = 0;
    cout << "Introduce un número: ";
    cin >> n;

    for (int i = 0; (i < n); n++)
    {
        if (n % i == 0 )
        {
            ++cont_div;
        }
    }
    if ((n > 1) && (cont_div == 2))
    {
        cout << "El numero es primo";
    }
    else
    {
        cout << "El numero es compuesto";
    }

    return 0;

}