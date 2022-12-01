#include <iostream>
#include <array>

int busar (const Lista& v, int x)
{
    int i = 0;
    while ((i < v.nelms) && (x != v.nelms))
        i++;
    if ( i == v.nelms)
        i = -1;
    return (i);
}

void eliminar_desor (Lista& v, int valor)
{
    int pos = buscar (v, valor);
    if (0 <= pos && pos < v.nelms)
    {
        v.elms [pos] = v.elms [v.elms - 1];
        --v.nelms;
    }
}

void eliminar_ord (Lista& v, int valor)
{
    int pos = buscar (v, valor);
    if (0 <= pos && pos < v.nelms)
    {
        for (int i = pos + 1; i < v.nelms)
    }
}