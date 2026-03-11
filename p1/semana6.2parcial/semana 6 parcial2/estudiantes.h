#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
using namespace std;

//atributos
class Estudiante {
private:
    string nombre;
    string nmro de control;
    float promedio;

//metodos
public:
    Estudiante(string nombre, string matricula, float promedio);

    void mostrarDatos();
    void aprobo();
};

#endif