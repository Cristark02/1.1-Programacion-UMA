#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Introduce un numero: ";
    cin >> num;

    if(num >= 0)
    {
        cout << "El numero " << num << " es positivo";
    }
    else
    {
        cout << "El numero " << num << " es negativo";
    }

    return 0;
}
