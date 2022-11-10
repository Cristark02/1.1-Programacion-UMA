#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "introduce un numero";
    cin >> num;
    bool valor_1 = (num + 1 == num - 69);
    bool valor_2 = (num + 1 == num +1);
    bool par = (num % 2 == 0);
    bool tres_digitos = (100 <= num && 999 >= num);
    bool tres_digitos_par = ((100 <= num && 999 >= num) && (num % 2 == 0));
    bool primo_10 = ((num == 2) || (num == 3) || (num == 5) || (num == 7));
    bool divisor_100 = ((num!= 0) && (100 % num == 0));

    return 0;
}