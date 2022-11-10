#include <iostream>

using namespace std;

void ft_mostrar_resultado(int m, int n, long res)
{
    cout << "El número combinatorio de " << m << " sobre " << n << " es " << res << endl;
}

long ft_factorial(int x)
{
    long fact = 1;
    for (int i = 2; i <= x; ++i)
    {
        fact = fact * i;
    }
    return fact;
}

long ft_combinatorio(int m, int n)
{
    return ft_factorial(m) / ( ft_factorial(n) * ft_factorial(m-n) );
}

void ft_leer_datos(int& m, int& n)
{
    cout << "Introduce dos numeros: ";
    cin >> m >> n;
}

int main ()
{
    int m, n;
    cout <<" Introduce dos numeros: ";
    ft_leer_datos (m, n);
    long res = ft_combinatorio(m, n);
    ft_mostrar_resultado(m, n, res);
}