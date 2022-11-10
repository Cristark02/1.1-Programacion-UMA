#include <iostream>

using namespace std;

const char SIMBOLO = '*';
const char ESPACIO = ' ';

int main ()
{
    int n;
    cout <<  "Introduzca un número: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == n-1 || j == i)
            {
                cout << SIMBOLO;
            }
            else
            {
                cout << ESPACIO;
            }
        }

        cout << endl;
    }
}