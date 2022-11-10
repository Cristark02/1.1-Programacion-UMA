#include <iostream>

using namespace std;

int main ()
{
    char c;
    cout << "Introduzca el texto terminado en un punto: \n";
    cin.get (c);

    int dist;
    int ascii = 0;
    while (c != '.')
    {
        dist = c;
        ascii = ascii + 1;
        cin.get (c);
        cout << dist << " ";
    }
    cout << "\nNumero de caracteres leidos: " << ascii;

    return 0;
}
