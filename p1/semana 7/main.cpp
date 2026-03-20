#include <iostream>
#include "Estudiante.h"
using namespace std;

int main() {
    Estudiante est;
    int opcion;
    string nombre, matricula;
    float calificacion;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Registrar datos" << endl;
        cout << "2. Modificar calificacion" << endl;
        cout << "3. Mostrar datos" << endl;
        cout << "4. Estado del estudiante" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Nombre: ";
                cin >> nombre;
                cout << "Matricula: ";
                cin >> matricula;
                cout << "Calificacion: ";
                cin >> calificacion;
                est.registrarDatos(nombre, matricula, calificacion);
                break;

            case 2:
                cout << "Nueva calificacion: ";
                cin >> calificacion;
                est.modificarCalificacion(calificacion);
                break;

            case 3:
                est.mostrarDatos();
                break;

            case 4:
                cout << "Estado: " << est.obtenerEstado() << endl;
                break;

            case 5:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while(opcion != 5);

    return 0;
}