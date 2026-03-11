#include "Estudiante.h"
#include <iostream>
using namespace std;


//constructor
Estudiante::Estudiante(string nombre, string matricula, float promedio) {
    this->nombre = nombre;
    this->nmro de control = Nmro de control;
    this->promedio = promedio;
}

void Estudiante::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "nmro de control: " << nmro de control << endl;
    cout << "Promedio: " << promedio << endl;
}

void Estudiante::aprobo() {
    if(promedio >= 70) {
        cout << "Estado: Aprueba la materia." << endl;
    } else {
        cout << "Estado: No aprueba" << endl;
    }
}