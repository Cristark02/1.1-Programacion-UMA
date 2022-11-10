#include <iostream>

using namespace std;

const double PST_EUR = 166.386;

int main()
{
    int pesetas;
    cout << "Introduce la cantidad de pesetas\n";
    cin >> pesetas;
    double euros = pesetas/PST_EUR;
    cout << "Dispone de " << euros << " euros";

    return 0;
}
