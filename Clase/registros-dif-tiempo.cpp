#include <iostream>

using namespace std;

const int SEG_MIN = 60;
const int MIN_HORA = 60;
const int MAX_HORAS = 24;
const int SEG_HORA = SEG_MIN * MIN_HORA;

struct Tiempo
{
    int horas;
    int minutos;
    int seg;
};

void ft_mostrar_dif (const Tiempo& t)
{
    cout << t.horas << t.minutos << t.seg << endl;
}


void ft_calc_tiempo (int sg, Tiempo& t)
{
    t.horas = sg / SEG_HORA;
    t.minutos = (sg % SEG_HORA) / SEG_MIN;
    t.seg = (sg % SEG_HORA) % SEG_MIN;
    
}

void ft_ordenar (int& a, int& b)
{
    if (a > b)
    {
        int x = a;
        a = b;
        b = x;
    }
}

int ft_calc_seg (const Tiempo& t)
{
    return t.horas * SEG_HORA + t.minutos * SEG_MIN + t.seg;
}

void ft_dif_t (const Tiempo t1, const Tiempo t2, Tiempo& res)
{
    int s1 = ft_calc_seg (t1);
    int s2 = ft_calc_seg (t2);
    ft_ordenar (s1, s2);
    int dif = s2 - s1;
    ft_calc_tiempo (dif, res);
    
}

void ft_leer (Tiempo& t)
{
    cout << "Introduza una horaS, minutos y segundos: ";
    cin >> t.horas >> t.minutos >> t.seg;
}

int main ()
{
    Tiempo t_1, t_2, dif;
    ft_leer (t_1);
    ft_leer (t_2);
    ft_dif_t (t_1, t_2, dif);
    ft_mostrar_dif (dif);
    return 0;
}
