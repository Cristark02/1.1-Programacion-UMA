void prueba(int a, int b, double& c, double& d, char e)
{ /* ... */ }

int main()
{
    double x = 2, y = 3;
    int m = 4;
    char c = 'z';
    prueba(m+3, 10, x, y, c);
    //prueba(m, 19, x, y); FALTAN VALORES, 4 Y PIDE 5
    //prueba(35, m*10, x, c, y); ESTAN METIENDO CHAR EN DOUBLE
    prueba(m, 3.5, x, y, c);
    //prueba(30, 10, x, x+y, c); ESTAN METIENDO 2 VALORES A DOUBLE D
    //prueba(30, 10, m, x, c);
    prueba(m, m*m, y, x, c);
    //prueba(m, 10, 35.0, y, 'E'); EL CHAR NO SE METE CON COMILLAS Y ESTAN METIEDNO UN CHAR EN DOUBLE D
    //prueba(30, 10, c, d, e); CHAR EN DOUBLE
}