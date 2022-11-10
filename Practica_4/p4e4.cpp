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
void ft_comp_amigos(int a, int b)
{
    if ((a == ft_suma_div(b)) && (ft_suma_div(a) == b) && (!(a == b)) && (a < b))
    {
        cout << "Amigos: " << a << ", " << b << endl;
    }
}

void ft_intervalo(int n, int m)
{
    for (int a = 1; a >= n && a <= m; a++)
    {
        for (int b = 1; b >= n && b <= m; b++)
        {
            ft_comp_amigos(a, b);
        }
    }
}

void ft_leer_intervalo(int& n, int& m)
{
    cout << "Introduce un intervalo (dos numeros): ";
    cin >> n >> m;
}

int main ()
{
    int n, m;
    ft_leer_intervalo(n, m);
    if ((n >= m) || (n <= 0))
    {
        cout << "Error";
    }
    else
    {
    ft_intervalo(n, m);
    }
}
