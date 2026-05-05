#include <iostream>
#include "personajes.h"
using namespace std;

int main() {
    cout << "\n SISTEMA DE PERSONAJES RPG \n";

    Guerrero g("maximo", 10, 300, 50);
    cout << ">> Info del Guerrero:\n";
    g.mostrarInfo();
    g.atacar();
    cout << "\n";

    Mago m("oz", 9, 150, "rayo");
    cout << ">> Info del Mago:\n";
    m.mostrarInfo();
    m.atacar();
    cout << "\n";

    Arquero a("barton", 7, 250, 80);
    cout << ">> Info del Arquero:\n";
    a.mostrarInfo();
    a.atacar();
    cout << "\n";

    PersonajeEspecial pe("elsa", 15, 500, 70, "hielo");
    cout << ">> Info del Personaje Especial:\n";
    pe.mostrarInfoEspecial();
    pe.atacar();

    return 0;
}
