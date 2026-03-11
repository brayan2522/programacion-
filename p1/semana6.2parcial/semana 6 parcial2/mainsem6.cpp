#include "Estudiante.h"
#include <iostream>
using namespace std;

int main() {

    //instanciar objetos
    Estudiante estudiante1("brayan", "252240031", 90);
    Estudiante estudiante2("arturo", "252230050, 65);

    cout << "----- Estudiante 1 -----" << endl;
    estudiante1.mostrarDatos();
    estudiante1.aprobo();

    cout << endl;

    cout << "----- Estudiante 2 -----" << endl;
    estudiante2.mostrarDatos();
    estudiante2.aprobo();

    return 0;
    }