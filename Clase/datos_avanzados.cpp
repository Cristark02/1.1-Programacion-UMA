#include <iostream>

using namespace std;

int main ()
{
    int num;
    cout << "Introduce una secuencia de número terminada en cero: ";
    cin >> num;
    cout << "Resultado: ";
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            cout << num << " ";
        }
    cin >> num ;
    }
    return 0;
}