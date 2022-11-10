#include <iostream>

using namespace std;

const int BYTES_KIBYTES = 1024;
const int KIBYTES_MIBYTES = 1024;

int main ()
{
    int bytes;
    cout << "Introduce una cantidad de Bytes: ";
    cin >> bytes;
    cout << bytes << " Bytes corresponden a: \n";
    cout << "   Mibytes = " << bytes/(KIBYTES_MIBYTES*BYTES_KIBYTES) << "\n";
    cout << "   Kibytes = " << bytes%(KIBYTES_MIBYTES*BYTES_KIBYTES)/BYTES_KIBYTES << "\n"; //este falla
    cout << "   Bytes = " << bytes%KIBYTES_MIBYTES << "\n";


    return 0;
}
