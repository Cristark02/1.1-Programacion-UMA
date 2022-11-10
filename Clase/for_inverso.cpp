#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Introduce un número: ";
    cin >> N;

    for (int i = N; i >= 0; --i)
    {
        cout << i;
    }
    cout << endl;
}