#include <iostream>
#include "Producto.h"

using namespace std;

int main() {
    string nombre;
    float precio;
    int opcion;

    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    // Crear objeto (aquí se ejecuta el constructor)
    Producto p(nombre, precio);

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Mostrar producto\n";
        cout << "2. Modificar producto\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                p.mostrar();
                break;

            case 2:
                cout << "Nuevo nombre: ";
                cin >> nombre;
                cout << "Nuevo precio: ";
                cin >> precio;
                p.modificar(nombre, precio);
                break;

            case 3:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while(opcion != 3);

    return 0;
}