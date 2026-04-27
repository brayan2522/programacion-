#include "empleado.h"


//  Empleado

Empleado::Empleado(string n, int e, double s) {
    nombre  = n;
    edad    = e;
    salario = s;
}

void Empleado::mostrarInfo() {
    cout << "Nombre:       " << nombre  << endl;
    cout << "Edad:         " << edad    << " años" << endl;
    cout << "Salario base: $" << salario << endl;
}

double Empleado::calcularSalario() {
    return salario;
}



// EmpleadoTiempoCompleto

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(
    string n, int e, double s, double b)
    : Empleado(n, e, s)
{
    bono = b;
}

void EmpleadoTiempoCompleto::mostrarInfo() {
    Empleado::mostrarInfo();          // reutiliza la info base
    cout << "Bono:         $" << bono << endl;
}

double EmpleadoTiempoCompleto::calcularSalario() {
    return salario + bono;
}


 //EmpleadoPorHoras

EmpleadoPorHoras::EmpleadoPorHoras(
    string n, int e, int h, double p)
    : Empleado(n, e, 0)               // salario base = 0, no aplica
{
    horasTrabajadas = h;
    pagoPorHora     = p;
}

void EmpleadoPorHoras::mostrarInfo() {
    cout << "Nombre:           " << nombre          << endl;
    cout << "Edad:             " << edad            << " años" << endl;
    cout << "Horas trabajadas: " << horasTrabajadas << endl;
    cout << "Pago por hora:    $" << pagoPorHora    << endl;
}

double EmpleadoPorHoras::calcularSalario() {
    return horasTrabajadas * pagoPorHora;
}


// Prestaciones


Prestaciones::Prestaciones(string seg, int vac) {
    seguro     = seg;
    vacaciones = vac;
}

void Prestaciones::mostrarPrestaciones() {
    cout << "Seguro:            " << seguro     << endl;
    cout << "Dias de vacaciones:" << vacaciones << endl;
}



// IMPLEMENTACION: EmpleadoCompletoConPrestaciones


EmpleadoCompletoConPrestaciones::EmpleadoCompletoConPrestaciones(
    string n, int e, double s, double b,
    string seg, int vac)
    : EmpleadoTiempoCompleto(n, e, s, b),
      Prestaciones(seg, vac)
{}

void EmpleadoCompletoConPrestaciones::mostrarInfo() {
    EmpleadoTiempoCompleto::mostrarInfo();   // nombre + salario + bono
    mostrarPrestaciones();                   // seguro + vacaciones
}
