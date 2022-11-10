#include <iostream>

using namespace std;

const double    GASTOS_FIJOS = 1;
const double    KWH_100 = 0.5;
const double    KWH_150 = 0.35;
const double    KWH_RESTO = 0.25;

const double    KW_1 = 100;
const double    KW_2 = 150;

int main()
{
    double kw, importe, resto;
    cout << "Introduzca el consumo del contador: ";
    cin >> kw;

    if (kw <= 100)
    {
        importe = (kw * KWH_100) + GASTOS_FIJOS;
        cout << "Consumo: " << kw << "Kwh." << "   Importe: " << importe << "€";
    }

    if (kw > 100 && kw <= 250)
    {
        resto = kw - 100;
        importe = (resto * KWH_150) + (KW_1 * KWH_100) + GASTOS_FIJOS;
        cout << "Consumo: " << kw << "Kwh.  " << "Importe: " << importe << "€";
    }

    if (kw >= 250)
    {
        resto = kw - 250;
        importe = (resto * KWH_RESTO) + (KW_2 * KWH_150) + (KW_1 * KWH_100) + GASTOS_FIJOS;
        cout << "Consumo: " << kw << "Kwh.  " << "Importe: " << importe << "€";
    }

    return 0;
}
