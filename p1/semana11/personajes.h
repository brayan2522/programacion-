#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <string>
using namespace std;

class Personaje {
protected:
    string nombre;
    int nivel;
    int vida;

public:
    Personaje(string nombre, int nivel, int vida);
    void mostrarInfo();
    virtual void atacar();   
    string getNombre();
};

class Guerrero : public Personaje {
private:
    int fuerzaExtra;

public:
    Guerrero(string nombre, int nivel, int vida, int fuerzaExtra);
    void atacar() override;
};

class Mago : public Personaje {
private:
    string elemento;

public:
    Mago(string nombre, int nivel, int vida, string elemento);
    void atacar() override;
};

class Arquero : public Personaje {
private:
    int alcance;

public:
    Arquero(string nombre, int nivel, int vida, int alcance);
    void atacar() override;
};


class PersonajeEspecial : public Guerrero, public Mago {
public:
    PersonajeEspecial(string nombre, int nivel, int vida,
                      int fuerzaExtra, string elemento);
    void atacar() override;
    void mostrarInfoEspecial();
};

#endif
