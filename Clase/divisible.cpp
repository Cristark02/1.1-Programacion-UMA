#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "introduce dos numeros\n";
    cin >> x;
    cin >> y;
    if ((y != 0)&&(x%y == 0))
    {
        cout << "si es divisible";
    }
    else
    {
        cout << "no es divisible";
    }
    return 0;
}