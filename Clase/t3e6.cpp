#include <iostream>

using namespace std;

bool es_primo(int n)
{
    int i = 2;
    while ((i <= n/2) && (n % i != 0))
    {
        ++i;
    }
    return (i == n/2+1);
}


void ft_goldbach (int x, int& p1, int & p2 )
{
    p1 = 0;
    p2 = 0;
    bool ok = false;
    for (int i = 0; (i < x) && ! ok; i++)
    {
        if (es_primo(i) && es_primo(x-i))
        {
        ok = true;
        p1 = i;
        p2 = x-i;
        }

    } 

}

void ft_comp_goldbatch (int i)
{
    int p1, p2;
    ft_goldbach (i, p1, p2);
    if (i != p1 + p2)
    {
        cout << "Error en Conjetura de Goldbach para : " << i << endl;
    }
    else
    {
        cout << i << " = " << p1 << " + " << p2 << " (ambos primos)" << endl;
    }
}

inline bool ft_es_par(int x)
{
    return (x % 2 == 0);
}

void ft_ordenar(int& a, int& b)
{
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
}

void ft_mostrar_suma (int a, int b)
{
    ft_ordenar (a, b);
    for (int i = a; i <= b; i++)
    {
        if (ft_es_par (i))
        {
            ft_comp_goldbatch (i);
        }
    }
}

void ft_leer (int& num)
{
    cout << "Introduzca un numero: ";
    cin >> num;
}

int main ()
{
    int a, b;
    ft_leer (b);
    ft_leer (a);
    ft_mostrar_suma (a, b);
}