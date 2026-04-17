#include "Pacman.h"

int main() {

    Pacman p(0,0);
    p.mostrar();

    p.mover();
    p.mostrar();

    p.mover('d');
    p.mostrar();

    p.mover(3);
    p.mostrar();

    p = p + 10;
    p.mostrar();

    p += 5;
    p.mostrar();

    return 0;
}
