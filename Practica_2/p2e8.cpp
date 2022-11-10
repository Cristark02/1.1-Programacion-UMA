#include <iostream>

using namespace std;

int main()
{
    int num, provincia, num_op, digito_control, comprobacion;
    int num_op_1, num_op_2, num_op_3, num_op_4;
    cout << "Introduzca el codigo numerico de 4 digitos: ";
    cin >> num;

    if (num < 1000 || num > 9999)
    {
        cout << "Codigo erroneo";
    }
    else
    {
        provincia = num /1000;
        num_op_1 = num % 1000;
        num_op_2 = num_op_1 / 100;
        num_op_3 = (num_op_1 % 100) / 10;

        num_op = (num_op_2 * 10) + num_op_3;
        digito_control = (num_op_1 % 10);
        comprobacion = (provincia * num_op) % 10;

        cout << "Provincia: " << provincia << endl;
        cout << "Numero de operacion: " << num_op << endl;
        cout << "Digito de control: " << digito_control << endl;
        cout << "Comprobacion: ";

        if (digito_control == comprobacion)
        {
            cout << "correcto";
        }
        else
        {
            cout << "error";
        }
    }
    
    return 0;
}
