#include "Producto.h"

// Constructor
Producto::Producto(string n, float p) {
    nombre = n;
    precio = p;
    cout << "Objeto creado correctamente" << endl;
}

// Destructor
Producto::~Producto() {
    cout << "Objeto destruido" << endl;
}

// Mostrar datos
void Producto::mostrar() {
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: $" << precio << endl;
}

// Modificar datos
void Producto::modificar(string n, float p) {
    nombre = n;
    precio = p;
    cout << "Datos modificados correctamente" << endl;
}