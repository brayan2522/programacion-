#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    float calificacion;

public:
    // Métodos
    void registrarDatos(string n, string m, float c);
    void modificarCalificacion(float nuevaCalif);
    void mostrarDatos();
    string obtenerEstado(); // retorna si aprueba o reprueba
};

#endif