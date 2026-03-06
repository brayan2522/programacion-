#include <iostream>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    float promedio;

public:

    // constructor
    Estudiante(string nombre, string matricula, float promedio) {
        this->nombre = nombre;
        this->matricula = matricula;
        this->promedio = promedio;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Promedio: " << promedio << endl;
    }


    void aprobo() {
        if(promedio >= 70) {
            cout << "Estado: Aprueba la materia." << endl;
        } else {
            cout << "Estado: No aprueba" << endl;
        }
    }
};

int main() {

    // instanciar objetos
    Estudiante estudiante1("luis", "L110", 80);
    Estudiante estudiante2("jose", "J231", 60);

    cout << "----- Estudiante 1 -----" << endl;
    estudiante1.mostrarDatos();
    estudiante1.aprobo();

    cout << endl;

    cout << "----- Estudiante 2 -----" << endl;
    estudiante2.mostrarDatos();
    estudiante2.aprobo();

    return 0;
}