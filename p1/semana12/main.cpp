vector<Personaje*> personajes;

// Crear personajes
personajes.push_back(new Guerrero("Leila", 10, 100));
personajes.push_back(new Mago("Mario", 8, 80));
personajes.push_back(new Arquero("jose", 9, 90));

int opcion;

do {
    cout << "\n=== MENU DEL JUEGO ===\n";
    cout << "1. Mostrar personajes\n";
    cout << "2. Ejecutar ataques\n";
    cout << "3. Combatir\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch(opcion) {

    case 1:

        cout << "\n=== INFORMACION ===\n";

        for (int i = 0; i < personajes.size(); i++) {

            cout << "\nPersonaje #" << i + 1 << endl;

            personajes[i]->mostrarInfo();
        }

        break;

    case 2:

        cout << "\n=== ATAQUES ===\n";

        for (Personaje* p : personajes) {
            p->atacar();
        }

        break;

    case 3:

        int atacante, objetivo;

        cout << "\nSeleccione atacante:\n";

        for (int i = 0; i < personajes.size(); i++) {

            cout << i + 1 << ". "
                 << personajes[i]->getNombre()
                 << endl;
        }

        cin >> atacante;

        cout << "\nSeleccione objetivo:\n";

        for (int i = 0; i < personajes.size(); i++) {

            cout << i + 1 << ". "
                 << personajes[i]->getNombre()
                 << endl;
        }

        cin >> objetivo;

        if (atacante >= 1 && atacante <= personajes.size() &&
            objetivo >= 1 && objetivo <= personajes.size()) {

            combatir(
                personajes[atacante - 1],
                personajes[objetivo - 1]
            );

        } else {

            cout << "\nOpcion invalida.\n";
        }

        break;

    case 4:

        cout << "\nSaliendo del juego...\n";

        break;

    default:

        cout << "\nOpcion no valida.\n";
    }

} while(opcion != 4);

// Liberar memoria
for (Personaje* p : personajes) {
    delete p;
}

return 0;