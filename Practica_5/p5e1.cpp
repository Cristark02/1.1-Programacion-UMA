#include <iostream>

using namespace std;

double ft_factorial(int num)
{
    double cnt = 1;
    for (int j = 1; j <= num; j++)
    {
        cnt = cnt * j;
    }
    return cnt;
}

double ft_potencia(double num, double exp)
{
    double cnt = 1;
    for (int j = 1; j <= exp; j++)
    {
        cnt = cnt * num;
    }
    return cnt;
}

double ft_algor_taylor (double num)
{
    double serie;
    double i = 0;
    double cnt = 0;
    do
    {
        i++;
        serie = ft_potencia(num, i) / ft_factorial(i);
        cnt = cnt + serie;
    }
    while (serie >= 0.0001);
    double resultado = 1 + cnt;
    return resultado;
}

double ft_mostrar_taylor (double num)
{
    cout << "Serie : " << ft_algor_taylor(num) << endl;
    return 0;
}

void ft_leer (double& num)
{
    do 
    {
        cout << "Introduzca el valot de X [0..1]: ";
        cin >> num;
    }
    while (num < 0 || num > 1);
}

int main ()
{
    double num;
    ft_leer (num);
    ft_mostrar_taylor (num);
}