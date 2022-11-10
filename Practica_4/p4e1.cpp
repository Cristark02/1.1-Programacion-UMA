#include <iostream>

using namespace std;

void ft_num_descend(int fila)
{
    int valor = fila -1;
    for (int i = valor; i >= 1; i--)
    {
        cout << i;
    }
}

void ft_num_ascend(int fila)
{
    for (int i = 1; i <= fila; i++)
    {
        cout << i;
    }
}

void ft_char_blanco(int num, int fila)
{
    for (int i = 1; i <= (num-fila); i++)
    {
        cout << " ";
    }
}

void ft_priamide(int num)
{
    for (int fila = 1; fila <= num; fila++)
    {
        ft_char_blanco(num, fila);
        ft_num_ascend(fila);
        ft_num_descend(fila);
        cout << endl;
    }
}

void ft_guion(int num)
{
    for (int i = 1; i <= (2*num-1); i++)
        {
            cout << "-";
        }
}
void ft_leer(int&num)
{
    cout << "Introduzca el numero de filas (menor de 10): ";
    cin >> num;
    while ((num >= 10) || (num < 0))
    {
        cout << "Error. Introduzca el numero de filas (menor de 10): ";
        cin >> num;
    }
}

int main ()
{
    int num;
    ft_leer(num);
    ft_guion(num);
    cout << endl;
    ft_priamide(num);
    ft_guion(num);
}
