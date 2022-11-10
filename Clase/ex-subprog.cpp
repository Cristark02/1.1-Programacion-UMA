#include <iostream>

using namespace std;

const int NDIV = 3;

int ft_cuenta_divisores(int n)
{
    int cnt = 0;
    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

bool ft_es_seleccionable (int n)
{
    return ft_cuenta_divisores (n) == NDIV;
}

void ft_mostrar_sel_intervalo(int a, int b)
{
    for (int n = a; n <= b; n++)
    {
        if (ft_es_seleccionable (n))
        {
            cout << n << " ; ";
        }
    }
}

void ft_mostrar_seleccionable(int a, int b)
{
    if ((a >= b) || (a <= 0))
    {
        cout << "Error";
    }

    else
    {
        ft_mostrar_sel_intervalo (a, b);
    }
}

void ft_leer_intervalo(int& a, int& b)
{
    cout << "Introduce dos numeros: ";
    cin >> a >> b;
}

int main ()
{
    int a, b;
    ft_leer_intervalo (a, b);
    ft_mostrar_seleccionable(a, b);
}