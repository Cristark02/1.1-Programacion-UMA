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
        for (int j = 1; j <= num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
