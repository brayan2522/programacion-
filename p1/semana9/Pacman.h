#ifndef PACMAN_H
#define PACMAN_H

#include <iostream>
using namespace std;

class Pacman {

private:
    int x, y;
    int puntos;

public:
    Pacman(int x, int y);

    void mostrar();

    // Sobrecarga de métodos
    void mover();
    void mover(char direccion);
    void mover(int pasos);

    // Sobrecarga de operadores
    Pacman operator+(int p);
    void operator+=(int p);
};

#endif