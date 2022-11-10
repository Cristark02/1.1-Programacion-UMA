#include <iostream>

using namespace std;

int main ()
{
    int oper, op1, op2;
    char signo;

    cout << "Operacion (+ - * / &): ";
    cin >> signo;
    
    while (!(signo == '&'))
    {
        while (!(signo == '+' || signo == '-' || signo == '*' || signo == '/' || signo == '&'))
            {
                cout << "ERROR: Operacion no valida" << endl;
                cout << "Operacion (+ - * / &): ";
                cin >> signo;
            }

        cout << "Operando 1: ";
        cin >> op1;
        cout << "Operando 2: ";
        cin >> op2;


        if (signo == '+')
        {
            oper = op1 + op2;
        }
        else if (signo == '-')
        {
            oper = op1 - op2;
        }
        else if (signo == '*')
        {
            oper = op1 * op2;
        }
        else if (signo == '/')
        {
            oper = op1 / op2;
        }

        cout << "Resultado: "<< oper << endl;
    }
    
    cout << "FIN DEL PROGRAMA";

    return 0;

}