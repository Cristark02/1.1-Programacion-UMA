#include <iostream>

using namespace std;

int main()
{
 char   mayus;
 cout << "Escribe una mayuscula cualquiera\n";
 cin >> mayus;
 char minus = mayus + 32;
 cout << "Ahora tu letra es " << minus;

return 0;
}