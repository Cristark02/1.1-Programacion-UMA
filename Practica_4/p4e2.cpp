#include <iostream>

using namespace std;

bool ft_primo(int i)
{
    int j = 2;
    while ((j <= i/2) && (i % j != 0))
    {
        j++;
    }
    return (j == i / 2 + 1);
}

void ft_num_primo(int n)
{
    int cnt = 1;
    int i = 2;
    while (cnt <= n)
    {
        if (ft_primo(i))
        {
            cnt++;
            cout << i << " ";
        }
        i++;
    }
}

void ft_leer (int& n)
{
    cout << "Introduzca un numero: ";
    cin >> n;
}

int main ()
{
    int n;
    ft_leer(n);
    ft_num_primo(n);
}
