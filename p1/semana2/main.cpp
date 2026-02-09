#incluide <iostream>
#incluide "claseObjetos.h"
using namespace std;

int main () {
    celular calular1 ("negro", 15);
    celular calular2 ("blanco", 10);

    //objeto 1 

    cout <<" estado inicial deñ celular 1:\n";
    celular1.estado();
    celular1.encender();
    celular1.instalar(7);
    celular1.estado();

    //objeto2
    cout <<" estado inicial deñ celular 2:\n";
    celular2.estado();
    celular2.encender();
    celular2.instalar(14);
    celular2.estado();

    return 0;
}