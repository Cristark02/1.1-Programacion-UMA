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
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (((i + j) % 2) == 0)
            {
                cout << "x";
            }
            else
            {
                cout << "o";
            }
        }
        cout << endl;
    }

    return 0;
}
