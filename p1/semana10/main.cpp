#include <iostream>
#include "empleado.h"
using namespace std;

int main() {

    // 1. Empleado base
    
    
    cout << "========================================" << endl;
    cout << "          EMPLEADO BASE                 " << endl;
    cout << "========================================" << endl;

    Empleado emp1("Luis Garcia", 35, 8000.0);
    emp1.mostrarInfo();
    cout << "Salario calculado: $" << emp1.calcularSalario() << endl;



    // 2. Empleado de tiempo completo
    

    cout << "\n========================================" << endl;
    cout << "       EMPLEADO TIEMPO COMPLETO         " << endl;
    cout << "========================================" << endl;

    EmpleadoTiempoCompleto emp2("Ana Lopez", 28, 10000.0, 2500.0);
    emp2.mostrarInfo();
    cout << "Salario con bono:  $" << emp2.calcularSalario() << endl;



    // 3. Empleado por horas

    cout << "\n========================================" << endl;
    cout << "          EMPLEADO POR HORAS            " << endl;
    cout << "========================================" << endl;

    EmpleadoPorHoras emp3("Carlos Perez", 22, 160, 75.0);
    emp3.mostrarInfo();
    cout << "Salario del mes:   $" << emp3.calcularSalario() << endl;


    // 4.multiple empleado completo con prestaciones
    cout << "\n========================================" << endl;
    cout << "   EMPLEADO COMPLETO CON PRESTACIONES   " << endl;
    cout << "========================================" << endl;

    EmpleadoCompletoConPrestaciones emp4(
        "Maria Torres", 40, 15000.0, 3000.0, "IMSS", 15);
    emp4.mostrarInfo();
    cout << "Salario total:     $" << emp4.calcularSalario() << endl;


    cout << "\n========================================" << endl;
    cout << "           FIN DEL PROGRAMA             " << endl;
    cout << "========================================" << endl;

    return 0;
}
