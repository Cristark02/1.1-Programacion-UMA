#include <iostream>
#include <string>
#include <array>
using namespace std;

const int MAX_PAL_DIST = 10;

typedef array < string, MAX_PAL_DIST > TPalabras;

struct TDatos {
	TPalabras pal;
	int nPal;
};

int buscar (char c, const string& pal)
{
    int ind = 0;

    while (ind < int(pal.size()) && pal[ind] != c)
    {
        ind++;
    }

    return ind;
}

bool pal_valida(const string& pal, const string& patron, int x)
{
    int ind, cont, pos;
    string pal_aux;

    cont = 0;
    pos = 0;
    pal_aux = pal;

    while ((cont < x) && (ind < int(patron.size())))
    {
        pos = buscar(patron[ind], pal_aux);
        if (pos < int(pal_aux.size()))
        {
            pal_aux[pos] = ' ';
            cont ++;
        }
        ind++;
    }
}

bool esta (const string& pal, const TDatos& datos)
{
    int i = 0;

	while ((i < datos.nPal) && (pal != datos.pal[i])) {
		i++;
	}

	return i < datos.nPal;
}

void escribir(const TDatos& datos) {

	for (int i = 0; i < datos.nPal; i++) {
		cout << datos.pal[i] << " ";
	}
	cout << endl;
}

int main ()
{
    TDatos datos;
    string pal, patron;
    int x;

    cout << "Introduzca el patron: ";
	cin >> patron;

	cout << "Introduzca el valor de x: ";
	cin >> x;

	cout << "Introduzca el texto (FIN para terminar):\n";
	datos.nPal = 0;
	cin >> pal;

    while (pal != "FIN")
    {
        if(pal_valida(pal, patron, x) && !esta(pal, datos))
        {
            datos.pal[datos.nPal] = pal;
            datos.nPal++;
        }
        cin >> pal;
    }

    cout << "\nLas palabras que contienen al menos " << x
            << " caracteres en comun con " << patron << " son:\n\n";
	escribir(datos);

    return 0;

}