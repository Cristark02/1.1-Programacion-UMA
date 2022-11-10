#include <iostream>

using namespace std;

int ft_calc_fibonacci(int num)
{
    int fib, fib_1, fib_2;
    if (num < 2)
    {
        fib = num;
    }
    else
    {
        fib_1 = 0;
        fib = 1;
        for (int i = 2; i <= num; i++)
        {
            fib_2 = fib_1;
            fib_1 = fib;
            fib = fib_1 + fib_2;
        }
    }
    return fib;
}

void ft_mostrar_fibonacci (int num)
{
    cout << "fibonacci(" << num << ") : " << ft_calc_fibonacci (num) << endl; 
}

void ft_leer (int& num)
{
    cout << "Introduzca un numero: ";
    cin >> num;
    while (num <= 0)
    {
        cout << "Error. Introduzca un numero: ";
        cin >> num;
    }
    
}

int main()
{
    int num;
    ft_leer (num);
    ft_mostrar_fibonacci (num);
}