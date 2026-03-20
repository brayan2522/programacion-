#include <iostream>
#include "Estudiante.h"
using namespace std;

void Estudiante::registrarDatos(string n, string m, float c) {
    nombre = n;
    matricula = m;
    calificacion = c;
}

void Estudiante::modificarCalificacion(float nuevaCalif) {
    calificacion = nuevaCalif;
}

void Estudiante::mostrarDatos() {
    cout << "\n--- DATOS DEL ESTUDIANTE ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Calificacion: " << calificacion << endl;
}

string Estudiante::obtenerEstado() {
    if (calificacion >= 6)
        return "Aprobado";
    else
        return "Reprobado";
}