#include "ClaseObjeto.h"
#include <iostream>
using namespace std;

celular::Celular (string col, int capcidd) {

    color = col
    capacidad = capcidd
    capacidadActual = capA
    encendido = false;
}

//metodo encender
void Celular::encender() {
    encendido = true;
    cout << "El celular esta encendido :)";
}

//metodo apagar
void Celular::apagar() {
    encendido = false;
    cout << "El celular esta apagado.";
}

//metodo instalar
void Celular::instalar(int cantidad) {
    if (!encendido) {
        cout << "No se pueden instalar aplicaciones, el celular esta apagado.";
    }
    if (cantidad <=0) {
        cout << "No se pueden instalar aplicaciones inexistentes.";
    }
    if (capacidadActual + cantidad > capacidad) {
        cout << "Ya no hay espacio suficiente en almacenamiento.";
    }
    capacidadActual += cantidad;
    cout << "Se han instalado " << cantidad << " objetos exitosamente.";
}

//metodo desinstalar
void Celular::desinstalar(int cantidad) {
    if (cantidad <= 0) {
        cout << "Ingresa una cantidad.";
        return;
    }
    if (cantidad > capacidadActual) {
        cout << "No se pueden desinstalar tantas aplicaciones.";
        return;
    }
    capacidadActual -= cantidad;
    cout << "Se han desinstalado " << cantidad << " aplicaciones completamente desinstalada.";
}

//mostrar el estado
void celular::estado() {
    cout << "Su color: " << color << endl;
    cout << "Su capacidad" << capacidad << endl;
    cout << "Cantidad de aplicaciones instaladas: " << capacidadActual << endl;
    cout << "Estado: " << (encendido ? "Encendido" : "Apagado") << endl;
}
