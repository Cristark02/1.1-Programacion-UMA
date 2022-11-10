#include <iostream>

using namespace std;

int main()
{
    int num;
    int dig_1 = num % 10;
    int dig_2 = (num / 100) % 10;
    cout << "introduce un numero\n";
    cin >> num;
    bool tres_digitos = (100 <= num && 999 >= num);
    bool capicua = (tres_digitos && (dig_1 == dig_2));

    return 0;
}