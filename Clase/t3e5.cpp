#include <iostream>

using namespace std;

const int PRIMER_PRIMO = 2;

bool ft_es_primo (int n)
{
    int i = 2;
    while ((i <= n / 2) && (n % i != 0))
    {
        i++;
    }
    return (i == n / 2 + 1);

}

int ft_sig_primo (int p)
{
    int sig_primo = p + 1;
    while (! ft_es_primo(sig_primo))
    {
        sig_primo++;
    }
    return sig_primo;
}

void ft_mostrar_div (int p, int& n)
{
    while (n % p == 0)
    {
        n = n / p;
        cout << p << " ";
    }
}

void ft_fact_primos (int n)
{
    int primo;
    cout << "Los divisores primos de " << n << " son: ";
    primo = PRIMER_PRIMO;
    while (primo < n)
    {
        ft_mostrar_div (primo, n);
        primo = ft_sig_primo (primo);
    }
}

void ft_leer (int& num)
{
    cout << "Introduce un numero (>1): ";
    cin >> num;
}

int main ()
{
    int num;
    ft_leer (num);
    ft_fact_primos (num);
}