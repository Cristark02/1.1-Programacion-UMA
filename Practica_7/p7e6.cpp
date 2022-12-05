#include <iostream>
#include <array>
using namespace std;

const int MAX_CARGOS = 15;
const int MAX_PARTIDOS = 10;

struct Partido
{
    char nombre;
    int cargos;
};

typedef array < Partido, MAX_PARTIDOS > Datos;

struct Resultado
{
    Datos partidos;
    int num_partios;
};

typedef array < int, MAX_CARGOS > Fila;
typedef array < Fila, MAX_PARTIDOS > Matriz;

struct Divisores
{
    Matriz valores;
    int num_partidos;
    int num_cargos;
};

void mostrar (const Resultado& resul)
{
    cout << "Los Cargos Electos son: " << endl;
    for (int i = 0; i < resul.num_partios; i++)
    {
        if (resul.partidos[i].cargos != 0)
        {
            cout << resul.partidos[i].nombre << " " << resul.partidos[i].cargos;
        }
        cout << endl;
    }
}

void calc_mayor (Divisores& div, int& fila, int& colum)
{
    fila = 0;
    colum = 0;
    for (int f = 0; f < div.num_partidos; f++)
    {
        for (int c = 0; c < div.num_cargos; c++)
        {
            if (div.valores[f][c] > div.valores[fila][colum])
            {
                fila = f;
                colum = c;
            }
        }
    }
}

void calc_cargos (Divisores& div, Resultado& resul)
{
    int fila_mayor, colum_mayor;
    for (int i = 0; i < div.num_cargos; i++)
    {
        calc_mayor (div, fila_mayor, colum_mayor);
        resul.partidos [fila_mayor].cargos++;
        div.valores[fila_mayor][colum_mayor] = 0;
    }
}

void calc_div (Divisores& div)
{
    for (int fil = 0; fil < div.num_partidos; fil++)
    {
        for (int col = 1; col < div.num_cargos; col++)
        {
            div.valores[fil][col] =

            div.valores[fil][0] / (col+1);

        }
    }
}

void leer (Divisores& div, Resultado& resul)
{
    do
    {
        cout << "Introduzca el numero de Cargos (>= 1 y <= " << MAX_CARGOS << " ): ";
        cin >> div.num_cargos;
    } while ((div.num_cargos < 1) || (div.num_cargos > MAX_CARGOS));
    do
    {
        cout << "Introduzca el numero de Partidos (>= 1 y <= " << MAX_PARTIDOS << " ): ";
        cin >> div.num_partidos;
    } while ((div.num_partidos < 1) || (div.num_partidos > MAX_PARTIDOS));

    resul.num_partios = div.num_partidos;

    cout << "Introduzca el Nombre y Numero de Votos por Partido:\n";
    for (int i = 0; i < resul.num_partios; i++)
    {
        cout << "Partido " << i+1 << ": ";
        cin  >> resul.partidos[i].nombre >> div.valores[i][0];
        resul.partidos[i].cargos = 0;
    }
    
}

int main ()
{
    Divisores div;
    Resultado resul;

    leer (div, resul);
    calc_div (div);
    calc_cargos (div, resul);
    mostrar (resul);
}
