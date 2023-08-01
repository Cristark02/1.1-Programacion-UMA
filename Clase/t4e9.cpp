#include <iostream>
#include <array>
using namespace std;

const int MAX = 20;

typedef array < char, MAX > datos;

struct Lista
{
    int nelms;
    int elms;
};

void mezclar(const Lista& v1, const Lista& v2, Lista& v3)
{

}

bool esta_ordenado (const Lista& v)
{
    bool ok = false;
    
}

void leer (Lista& v)
{
    cout << "Introduzca una secuencia de letras ordenadas (hasta Enter): ";
    for (int i = 0; i < MAX; i++)
        cin >> v[i];
}

int main ()
{
    Lista v1, v2, v3;
    leer (v1);
    leer (v2);
    if (esta_ordenador (v1) && esta ordenado (v2))
    {
        mezclar (v1, v2, v3);
        cout << "Mezcla ordenada: ";
        escribir (v3);
    }
    else
    {
        cout << "Error, las listas no estan ordenadas";
    }

}
