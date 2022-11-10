#include <iostream>

using namespace std;

int ft_digito (int num, int i)
{
    for (int j = 0; (j < i); ++j)
    {
        num = num / 10;
    }
    return num % 10;
}

int ft_num_digitos (int num)
{
    int i = 1;
    while (num > 9)
    {
        num = num / 10;
        i++;
    }
    return i;
}

void ft_mostrar_suma (int num)
{
    int num_dig = ft_num_digitos (num);
    for (int i = 0; i < num_dig / 2; i++)
    {
        int dig_i = ft_digito (num, i);
        int f = num_dig-i-1;
        int dig_f = ft_digito (num, f);
        cout << dig_i << " + " << dig_f << " = " << (dig_i + dig_f) << ", ";
    }
    if (num_dig %2 != 0)
    {
        cout << ft_digito(num, num_dig / 2);
    }
    cout << endl;
}

void ft_leer (int& num)
{
    cout << " Introduzca numero: ";
    cin >> num;
}

int main ()
{
    int num;
    ft_leer (num);
    ft_mostrar_suma (num);
}