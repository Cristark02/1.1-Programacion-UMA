#include <iostream>

using namespace std;

void ft_asterisco_descen(int fila)
{
    for (int i = fila; i >= 1; i--)
    {
        cout << "* ";
    }
}

void ft_char_blanco_descen(int num, int fila)
{
    for (int i = 0; i <= (num-fila); i++)
    {
        cout << " ";
    }
}

void ft_piramide_descen(int num)
{
    for (int fila = num; fila >= 1; fila--)
    {
        ft_char_blanco_descen(num, fila);
        ft_asterisco_descen(fila);
        cout << endl;
    }
}

void ft_asterisco_ascen(int fila)
{
    for (int i = 1; i <= fila; i++)
    {
        cout << "* ";
    }
}

void ft_char_blanco_ascen(int num, int fila)
{
    for (int i = 1; i <= (num-fila); i++)
    {
        cout << " ";
    }
}

void ft_piramide_ascen(int num)
{
    for (int fila = 1; fila <= num; fila++)
    {
        ft_char_blanco_ascen(num, fila);
        ft_asterisco_ascen(fila);
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

void ft_leer(int& num)
{
    cout << "Introduzca un numero: ";
    cin >> num;
    while ((num < 0))
    {
        cout << "Error. Introduzca un numero: ";
        cin >> num;
    }
}

int main ()
{
    int num;
    ft_leer(num);
    ft_guion(num);
    cout << endl;
    ft_piramide_ascen(num);
    ft_piramide_descen(num - 1);
    ft_guion(num);
}