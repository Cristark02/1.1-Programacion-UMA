#include <iostream>
#include <array>
using namespace std;
const int MAX = 20;
typedef array < double, MAX > Tarray;

struct TEst
{
    int nAlum;
    Tarray TAlturas;
};

void es_menor (const TEst& estat, double media)
{
    double cont = 0;
    for (int i = 0; i < estat.nAlum; i++)
    {
        if (estat.TAlturas[i] < media)
            cont = cont + 1;
    }

    cout << "Numero de alumnos mas bajos que la media: " << cont << endl;
}

void es_mayor (const TEst& estat, double media)
{
    double cont = 0;
    for (int i = 0; i < estat.nAlum; i++)
    {
        if (estat.TAlturas[i] >= media)
            cont = cont + 1;
    }
    cout << "Numero de alumnos mas altos que la media: " << cont << endl;
}

double calc_media (const TEst& estat)
{
     
    double suma = 0;
    double media;

    for(int i=0;i<estat.nAlum; i++)
        suma=suma + estat.TAlturas[i];

    media = suma / estat.nAlum;

    return media;
}

void leer_estat (TEst& estat)
{
    cout<<"Introduzca las "<<estat.nAlum<<" estaturas: ";
    for(int i=0;i<estat.nAlum;i++)
        cin>>estat.TAlturas [i];
}

void leer_nalum (TEst& estat)
{
    cout << "Cuantas estaturas va a introducir (maximo 20): ";
    cin >> estat.nAlum;
}

int main ()
{
    double media;
    TEst estaturas;
    leer_nalum (estaturas);
    leer_estat (estaturas);
    media = calc_media (estaturas);
    cout << "La media es: " << media << endl;
    es_mayor (estaturas, media);
    es_menor (estaturas, media);
}
