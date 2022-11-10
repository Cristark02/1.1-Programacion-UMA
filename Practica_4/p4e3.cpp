#include <iostream>

using namespace std;

int ft_suma_div(int n)
{
    int res = 1;

    for (int cont = 2; cont <= n/2; cont++)
    {
        if (n % cont == 0)
        {
            res += cont;
        }
    }
    return res;
}

void ft_comp_amigos (int a, int b)

{
    if ((a == ft_suma_div(b)) && (ft_suma_div(a) == b))
    {
        cout << a << " y " << b << " son amigos";
    }
    else
    {
        cout << a << " y " << b << " no son amigos";
    }
}

void ft_leer_a(int& a, int& b)
{
    cout << "Introduzca dos numeros: ";
    cin >> a >> b;
}

int main ()
{
    int a, b;
    ft_leer_a(a, b);
    ft_comp_amigos(a, b);
    return 0;
}