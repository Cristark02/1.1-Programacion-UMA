#include <iostream>

using namespace std;



void ft_leer(int& n, int& i)
{
    cout << "Introduzca dos numeros: ";
    cin >> n >> i;
    while (n <= 0 || i <= 0)
    {
        cout << "Error. Introduzca dos numeros: ";
        cin >> n >> i;
    }
}

int main()
{
    int n, i;
    ft_leer(n, i);
}