#include <iostream>

using namespace std;

const int kilogramo = 1000;
const int tonelada = 1000;

int main()
{
    int gramos;
    cout << "Introduce la cantidad de gramos:\n";
    cin >> gramos;
    int Tn = gramos/(kilogramo*tonelada);
    cout << "Tienes " << Tn << "toneladas,";
    int Kg = (gramos%(kilogramo*tonelada)/kilogramo);
    cout << Kg << "kilogramos";
    int g = (gramos%(kilogramo*tonelada)%kilogramo);
    cout << "y " << g << " gramos";

    return 0;
}