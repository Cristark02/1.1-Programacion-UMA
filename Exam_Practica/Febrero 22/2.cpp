#include <iostream>
#include <array>
#include <string>
using namespace std;

const int MAX_PAL_DIST = 15;

typedef array < string, MAX_PAL_DIST > TPalabras;

struct TDatos
{
    TPalabras pal;
    int npal;
};

bool es(const string& pal, const string& datos)
{
    int i = 0;

    while ((i < datos.nPal) && (pal != datos.pal[i]))
    {
        i++;
    }
    return i < datos.npal;
}

int suma_ascii(const string& p)
{
    int suma = 0;

    for (int i = 0; i < int(p.size()); i++)
    {
        suma += int(p[i]);
    }
    return suma;
}

bool coincide_suma(const string& pat, const string& pal)
{
    return suma_ascii(pat) == suma_ascii(pal);
}

int main ()
{
    TDatos datos;
    string pal, patron;

    cout << "Introduzca el patrón: ";
    cin >> patron;
    datos.npal = 0;
    cout << "Introduzca el texto (FIN para terminar): ";
    cin >> pal;

    while (pal != "FIN")
    {
        if (coincide_suma(patron, pal) && !esta(pal, datos))
        {
            datos.pal[datos.npal] = pal;
            datos.npal++;
        }
        cin >> pal;
    }
    escribir(pal);

    return 0;
}