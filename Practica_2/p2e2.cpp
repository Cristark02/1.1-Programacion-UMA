#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Introduce tres numeros enteros: ";
    cin >> x >> y >> z;

   if ((x > y) && (x > z))
   {
       cout << "El numero mayor es: " << x;
   }
   else if ((y > x) && (y > z))
   {
       cout << "El numero mayor es: " << y;
   }
   else if ((z > x) && (z > y))
   {
       cout << "El numero mayor es: " << z;
   }
   else
   {
       cout << "No existe un unico numero mayor";
   }

   return 0;
}
