#include <iostream>

using namespace std;

const int NDIV = 3;

int main ()
{
    int a, b;
    cout << "Introduce dos numeros: ";
    cin >> a >> b;

    if ((a >= b) || (a <= 0))
    {
        cout << "Error";
    }
    else
    {
        for (int num = a; num <= b; num++)
        {
            int cnt = 0;
            for (int div = 1; div <= num; div++)
            {
                if (num % div == 0)
                {
                    cnt++;
                }
            }
            if (cnt == NDIV)
            {
                cout << num << " ; ";
            }
        }
    }
}