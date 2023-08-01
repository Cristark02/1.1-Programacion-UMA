#include <iostream>
#include <array>
#include <string>
using namespace std;

const int MAX = 20;

struct TFecha
{
    int dia, mes, anyo;
};

struct Tproducto
{
    int codigo;
    string nombre;
    double precio;
    TFecha caducidad;
};

typedef array < Tproducto, MAX > TArray;
struct TFarmacia
{
    int nProd;
    TArray Producto;
};

void escribir_prod (const Tproducto& p)
{
    cout << "Datos del producto" << endl;
    cout << "Código: " << p.codigo << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Precio: " << p.precio << endl;
    cout << "Fecha de caducidad: ";
    cout << p.caducidad.dia << "/";
    cout << p.caducidad.mes << "/";
    cout << p.caducidad.anyo << endl;
}

int buscar_id_prod_codigo (const TFarmacia& f, int codigo)
{
    int i = 0;
    while ((i < f.nProd))
        i++;
    return i;
}

void buscar_prod_codigo (TFarmacia& f, int codigo, bool& encontrado, Tproducto& p)
{
    int i = buscar_id_prod_codigo (f, codigo);
    encontrado = (i < f.nProd);
    if (encontrado)
    {
        p = f.Producto[i];
    }
}

void insert_prod (TFarmacia& f, Tproducto p)
{
    if (f.nProd < MAX)
    {
        f.Producto[f.nProd] = p;
        f.nProd++;
    }
}

void leer_prod (Tproducto& p)
{
    cout << "Datos del producto" << endl;
    cout << "   Codigo: ";
    cin >> p.codigo;
    cout << "   Nombre: ";
    cin >> p.nombre;
    cout << "   Precio: ";
    cin >> p.precio;
    cout << "   Fecha de caducidad: ";
    cin >> p.caducidad.dia >> p.caducidad.mes >> p.caducidad.anyo;
}

char menu()
{

    cout << R"(
      ___          ___          ___          ___          ___          ___                     ___     
     /\  \        /\  \        /\  \        /\__\        /\  \        /\  \         ___       /\  \    
    /::\  \      /::\  \      /::\  \      /::|  |      /::\  \      /::\  \       /\  \     /::\  \   
   /:/\:\  \    /:/\:\  \    /:/\:\  \    /:|:|  |     /:/\:\  \    /:/\:\  \      \:\  \   /:/\:\  \  
  /::\~\:\  \  /::\~\:\  \  /::\~\:\  \  /:/|:|__|__  /::\~\:\  \  /:/  \:\  \     /::\__\ /::\~\:\  \ 
 /:/\:\ \:\__\/:/\:\ \:\__\/:/\:\ \:\__\/:/ |::::\__\/:/\:\ \:\__\/:/__/ \:\__\ __/:/\/__//:/\:\ \:\__\
 \/__\:\ \/__/\/__\:\/:/  /\/_|::\/:/  /\/__/~~/:/  /\/__\:\/:/  /\:\  \  \/__//\/:/  /   \/__\:\/:/  /
      \:\__\       \::/  /    |:|::/  /       /:/  /      \::/  /  \:\  \      \::/__/         \::/  / 
       \/__/       /:/  /     |:|\/__/       /:/  /       /:/  /    \:\  \      \:\__\         /:/  /  
                  /:/  /      |:|  |        /:/  /       /:/  /      \:\__\      \/__/        /:/  /   
                  \/__/        \|__|        \/__/        \/__/        \/__/                   \/__/    
)" << endl;
    char opcion;
    cout << endl;
    cout << "a. - Añadir Producto" << endl;
    cout << "b. - Buscar Producto por Codigo" << endl;
    cout << "c. - Buscar Producto por Nombre" << endl;
    cout << "d. - Borrar Producto" << endl;
    cout << "e. - Mostrar Productos" << endl;
    cout << "x. - Salir" << endl;
    do
    {
    cout << "Introduzca Opcion: ";
    cin >> opcion;
    }
    while ( ! (((opcion >= 'a') && (opcion <= 'e')) || (opcion == 'x')));
    return opcion;
}

int main ()
{
    TFarmacia farm;
    char opcion;
    Tproducto prod;
    string nombre;
    int codigo;
    bool ok;

    farm.nProd = 0;

    do
    {
        switch (opcion)
        {
        case 'a':
            cout << "Introduzca los datos del Producto" << endl;
            leer_prod (prod);
            insert_prod (farm, prod);
            break;
        case 'b':
            cout << "Introduzca codigo del Producto" << endl;
            cin >> codigo;
            buscar_prod_codigo (farm, codigo, ok, prod);
            if (!ok)
                cout << "Codigo del Producto no encontrado" << endl;
            else
                escribir_prod(prod);
        }
    } while (opcion != 'x');
    
}