#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout << "Introduce un numero\n";
    cin >> x;
    if ( x % 2 == 1)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
        
    return 0;
}