#include <iostream>
#include <iomanip>

using namespace std ;

const int seg_1_min = 60;
const int min_1_hora = 60;
const int horas_1_dia = 24;
const int dias_1_semana = 7;
const int seg_1_semana = seg_1_min * min_1_hora * horas_1_dia * dias_1_semana;
int main ()
{
    int seg;
    cout << " Introduzca los segundos: ";
    cin >> seg;

    int semanas = seg / seg_1_semana;
    int resto_semanas = seg % seg_1_semana;
    int dias = resto_semanas / (seg_1_min * min_1_hora * horas_1_dia);
    int resto_dias = resto_semanas % (seg_1_min * min_1_hora * horas_1_dia);
    int horas = resto_dias / (seg_1_min * min_1_hora);
    int resto_horas = resto_dias % (seg_1_min * min_1_hora);
    int min = resto_horas / min_1_hora;
    int seg_final = resto_horas % min_1_hora;

    cout << seg << " segundos " << "equivalen a [  " << semanas << "] semanas, " << dias << " dias " << setfill('0') << setw(2) << horas << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << seg_final;

    return 0;
}