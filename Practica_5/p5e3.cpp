#include <iostream>

using namespace std;


bool comprobacion_coprimos(int n, int m)
{
    bool r = true;
    while((m>1)&& (n>1)&&(r==true))
    {
         if(n<m)
         {
            m = m-n;
         }
         else if(n>m)
         {
            n = n-m;
         }
         else
         {
             r = false;
         }
    }return r;
}

void mostrar_resultados(int n, int m)
{
    for(int i = n; i < m; i ++)
    {
        for(int j = n ;j <= m; j ++)
        {
            if((comprobacion_coprimos(i,j)==true) && (i < j))
            {
                cout << "Coprimos: " << i << ", " << j << endl;

            }
        }
    }
}

void introducir_valores(int& n, int& m)

{
    cout << "Introduzca un intervalo (dos números): ";
    cin >> n >> m;
    while((n>m)||(n==0)||(m==0))
    {
        cout << "Error.";
        cout << "Introduzca un intervalo (dos números): ";
        cin >> n;
        cin>> m;
    }
}

int main()
{
    int n, m;
    introducir_valores(n,m);
    mostrar_resultados(n,m);
}