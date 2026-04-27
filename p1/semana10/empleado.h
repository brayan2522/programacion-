#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
using namespace std;


// CLASE BASE: Empleado
class Empleado {
protected:
    string nombre;
    int    edad;
    double salario;

public:
    Empleado(string n, int e, double s);

    virtual void   mostrarInfo();
    virtual double calcularSalario();
};



// CLASE DERIVADA 1: TiempoCompleto
class EmpleadoTiempoCompleto : public Empleado {
private:
    double bono;

public:
    EmpleadoTiempoCompleto(string n, int e, double s, double b);

    void   mostrarInfo()      override;
    double calcularSalario()  override;
};


// CLASE DERIVADA 2: PorHoras
class EmpleadoPorHoras : public Empleado {
private:
    int    horasTrabajadas;
    double pagoPorHora;

public:
    EmpleadoPorHoras(string n, int e, int h, double p);

    void   mostrarInfo()      override;
    double calcularSalario()  override;
};


// CLASE AUXILIAR: Prestaciones
class Prestaciones {
protected:
    string seguro;
    int    vacaciones;

public:
    Prestaciones(string seg, int vac);

    void mostrarPrestaciones();
};


// HERENCIA MULTIPLE: EmpleadoCompletoConPrestaciones
class EmpleadoCompletoConPrestaciones
    : public EmpleadoTiempoCompleto, public Prestaciones {

public:
    EmpleadoCompletoConPrestaciones(
        string n, int e, double s, double b,
        string seg, int vac);

    void mostrarInfo() override;
};

#endif
