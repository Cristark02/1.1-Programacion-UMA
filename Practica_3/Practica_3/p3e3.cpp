#include <iostream>

using namespace std;

int main ()
{
    int num;

    do
    {
        cout << "Introduzca un numero: ";
        cin >> num;
    }while (num <= 0);
    for (int i = 1; i <= num; i++)
    {
        cout << "*";
    }

    return 0;
}
