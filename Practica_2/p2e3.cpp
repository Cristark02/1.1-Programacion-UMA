#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Introduzca un caracter: ";
    cin >> a;

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        cout << "Es letra";
    }
    else if ( a == '.')
    {
        cout << "Es punto";
    }
    else
    {
        cout << "Error";
    }
}
