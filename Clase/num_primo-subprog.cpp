#include <iostream>

using namespace std;

bool ft_primo(int num)
{
    bool primo = (num > 1);
    for (int div = 2; (div <= num/2) && primo ; ++div)
    {
        if ((num % div) == 0)
        {
            primo = false;
        }
    }
    return primo;
}
void ft_proceso(int num)
{
    if (ft_primo(num))
    {
        cout << num << " ";
    }
}
int main()
{
    int num;
    cout << "Introduce una secuencia de números terminada en cero: " << endl;
    cin >> num ;
    cout << "Primos: " ;
    while (num != 0)
    {
        ft_proceso(num);
        cin >> num ;
    }
    cout << endl;
}