#include <iostream>

using namespace std;

void ft_num_descend(int fila)
{
    int valor = fila -1;
    for (int i = valor*2; i >= fila; i--)
    {
        cout << i%10;
    }
}

void ft_num_ascend(int fila)
{
    for (int i = fila; i <= fila*2 - 1; i++)
    {
        cout << i%10;
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
    cout << "Introduzca un numero de filas: ";
    cin >> num;
    while ((num < 0))
    {
        cout << "Error. Introduzca un numero de filas (menor de 10): ";
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
