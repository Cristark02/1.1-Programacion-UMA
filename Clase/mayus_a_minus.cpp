#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "introduce una letra\n";
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        a = char(int (a)) - int ('a') + int('A');
    }
    else if (a >= 'A' && a <= 'Z')
    {
        a = char(int (a)) + int ('a') - int('A');
    }
    cout << a;
    
    return 0;
}