#include <iostream>
#include <string.h>
using namespace std;

bool es_vocal (char cad)
{
    bool ok = false;
    if ((cad == 'a') || (cad == 'e') || (cad == 'i') || (cad == 'o') || (cad == 'u'))
        ok = true;
    return ok;
}

void eliminar_vocales (const string& cadena)
{
    string resultado = "";
    for (int i = 0; i < int(cadena.size()); i++)
    {
        if (!es_vocal(cadena[i]))
        {
            resultado += cadena[i];
        }
    }
    cout << "Cadena resultado: " << endl;
    cout << resultado;
}

void mostrar_original (const string& cad)
{
    cout << "Cadena original: " << cad << endl;
}

void leer (string& cad)
{
    cout << "Introduzca una cadena: ";
    getline (cin, cad);


}

int main ()
{
    string cadena;
    leer (cadena);
    mostrar_original (cadena);
    eliminar_vocales (cadena);
}