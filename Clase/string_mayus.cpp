#include <iostream>
#include <string>
using namespace std;

void mayusculas (char& c)
{
    if ('a' <= c && c <= 'z')
        c = c - 'a'+'A';
}

void mayus (string s)
{
    for (int i = 0; i < int(pal.size); i++)
        mayusculas(s[i]);
}
void leer (string& s)
{
    cout << "Chacho por 5 centimos y medio te pongo el string en mayusculas: ";
    cin >> s;
}

int main ()
{
    string s;
    leer (s);
    mayus (s);
    mostrar (s);
}