#include <iostream>
#include <array>

using namespace std;

const int MAX = 10;

typedef array < int, MAX > Tarray;

/*void elim_mayor (Tarray& num, int maximo)
{
    for (int i = 0; i < MAX; i++)
    {
        if (num[i] == maximo)
            num[i] = 0;
    }
}*/

void mostrar (Tarray& num, int maximo, int aparicione)
{
    cout << maximo << " aparece " << aparicione;
    if (aparicione > 1)
        cout << "veces, en la posiciones ";
    else
        cout << "vez, en la posicion ";
    for (int i = 0; i < MAX; i++)
    {
        if (num[i] == maximo)
        {
            cout << i + 1 << " ";
            num[i] = -1;
        }
    }
    cout << endl;
}

int calc_apariciones (const Tarray& num, int maximo)
{
    int apariciones = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (num[i] == maximo)
            apariciones++;
    }
    return apariciones;
}

int calc_maximo (const Tarray& num)
{
    int maximo = num[0];

    for (int i = 0; i < MAX; i++)
    {
        if (num[i] > maximo)
            maximo = num[i];
    }
    return maximo;
}

void leer (Tarray& num)
{
    cout << "Introduzca 10 numeros: ";
    for (int i = 0; i < MAX; i++)
        cin >> num[i];
}

int main ()
{
    Tarray num;
    int num_analiz = 0;
    int maximo, apariciones;

    leer (num);
    while (num_analiz < MAX)
    {
        maximo = calc_maximo (num);
        apariciones = calc_apariciones (num, maximo);
        mostrar (num, maximo, apariciones);
        num_analiz += apariciones;

    }

}