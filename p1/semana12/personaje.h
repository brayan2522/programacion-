#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class Personaje {
protected:
    string nombre;
    int nivel;
    int vida;

public:
    Personaje(string nom, int niv, int vid);
    virtual ~Personaje();

    void mostrarInfo();
    virtual void atacar() = 0;

    int recibirDanio(int cantidad);
    bool estaVivo();

    string getNombre();
    int getVida();
};

class Guerrero : public Personaje {
public:
    Guerrero(string nom, int niv, int vid);
    void atacar() override;
};

class Mago : public Personaje {
public:
    Mago(string nom, int niv, int vid);
    void atacar() override;
};

class Arquero : public Personaje {
public:
    Arquero(string nom, int niv, int vid);
    void atacar() override;
};

// combate
void combatir(Personaje* p1, Personaje* p2);

#endif