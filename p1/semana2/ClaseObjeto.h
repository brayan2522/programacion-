#ifndef ClaseObjeto_h
#define ClaseObjeto_h
#include <string>
using namespace std;

class Celular {

    private:
    string color;
    int aplicaciones;
    int bateria;
    bool encendido;
     
    public:
    celular ( string color, int cap);
    void encender();
    void apagar ():
    void almacenamiento();
    void camaras();
    void estado();

};
 #endif