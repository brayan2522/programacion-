Personaje::Personaje(string nom, int niv, int vid) {
    nombre = nom;
    nivel = niv;
    vida = vid;
}

Personaje::~Personaje() {
}

void Personaje::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Vida: " << vida << endl;
}

void Personaje::recibirDanio(int cantidad) {
    vida -= cantidad;

    if (vida < 0) {
        vida = 0;
    }
}

bool Personaje::estaVivo() {
    return vida > 0;
}

string Personaje::getNombre() {
    return nombre;
}

int Personaje::getVida() {
    return vida;
}

// guerrero
Guerrero::Guerrero(string nom, int niv, int vid)
    : Personaje(nom, niv, vid) {
}

void Guerrero::atacar() {
    cout << nombre << " realiza un ataque poderoso con espada " << endl;
}

// mago
Mago::Mago(string nom, int niv, int vid)
    : Personaje(nom, niv, vid) {
}

void Mago::atacar() {
    cout << nombre << " lanza una bola de fuego " << endl;
}

// arquero
Arquero::Arquero(string nom, int niv, int vid)
    : Personaje(nom, niv, vid) {
}

void Arquero::atacar() {
    cout << nombre << " dispara una flecha al objetivo " << endl;
}

// funcion de combate
void combatir(Personaje* p1, Personaje* p2) {

    if (!p1->estaVivo() || !p2->estaVivo()) {
        cout << "\nUno de los personajes ya no puede combatir.\n";
        return;
    }

    cout << "\n=== COMBATE ===\n";

    cout << p1->getNombre()
         << " ataca a "
         << p2->getNombre() << endl;

    p1->atacar();

    int dano = 20;

    p2->recibirDanio(dano);

    cout << p2->getNombre()
         << " recibió "
         << dano
         << " puntos de daño.\n";

    cout << "Vida restante de "
         << p2->getNombre()
         << ": "
         << p2->getVida()
         << endl;

    if (!p2->estaVivo()) {
        cout << p2->getNombre()
             << " ha sido derrotado \n";
    }
}