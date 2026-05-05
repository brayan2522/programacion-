#include "personajes.h"
#include <iostream>
using namespace std;


Personaje::Personaje(string nombre, int nivel, int vida) {
    this->nombre = nombre;
    this->nivel  = nivel;
    this->vida   = vida;
}

void Personaje::mostrarInfo() {
    
    cout << "  Nombre : " << nombre << "\n";
    cout << "  Nivel  : " << nivel  << "\n";
    cout << "  Vida   : " << vida   << "\n";
    
}

void Personaje::atacar() {
    cout << nombre << " lanza un ataque basico!\n";
}

string Personaje::getNombre() {
    return nombre;
}

Guerrero::Guerrero(string nombre, int nivel, int vida, int fuerzaExtra)
    : Personaje(nombre, nivel, vida) {
    this->fuerzaExtra = fuerzaExtra;
}

void Guerrero::atacar() {
    cout << nombre << " golpea con su espada! (+"
         << fuerzaExtra << " de dano extra)\n";
}


Mago::Mago(string nombre, int nivel, int vida, string elemento)
    : Personaje(nombre, nivel, vida) {
    this->elemento = elemento;
}

void Mago::atacar() {
    cout << nombre << " lanza un hechizo  " << elemento
         << " Critico!  El enemigo esta congelado!\n";
}

Arquero::Arquero(string nombre, int nivel, int vida, int alcance)
    : Personaje(nombre, nivel, vida) {
    this->alcance = alcance;
}

void Arquero::atacar() {
    cout << nombre << " dispara una flecha dano "
         << alcance << " Critico! Impacto directo!\n";
}

PersonajeEspecial::PersonajeEspecial(string nombre, int nivel, int vida,
                                     int fuerzaExtra, string elemento)
    : Guerrero(nombre, nivel, vida, fuerzaExtra),
      Mago(nombre, nivel, vida, elemento) {}

void PersonajeEspecial::atacar() {
    Guerrero::atacar();   
    Mago::atacar();       
    cout << ">>> COMBO BRUTAL activado! El enemigo no sabe que paso!\n";
}

void PersonajeEspecial::mostrarInfoEspecial() {
    cout << "  [PERSONAJE ESPECIAL]\n";
    Guerrero::mostrarInfo();
    cout << "  Tipo   : Guerrero-Mago\n";
}
