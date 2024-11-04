#include <iostream>
#include "Inscripcion.h"
using namespace std;

int main() {
    Inscripcion i;
    int opcionInicial = 0;

    cout << "Bienvenido al sistema de gestion de la mesa electoral." << endl;
    cout << "1. Entrar al sistema de gestion de candidatos" << endl;
    cout << "2. Salir" << endl;
    cout << "Elige una opcion: ";
    cin >> opcionInicial;

    if (opcionInicial == 1) {
        int opcion;
        do {
            cout << "\n--- Menu de gestion de candidatos ---" << endl;
            cout << "1. Registrar candidato" << endl;
            cout << "2. Mostrar candidatos" << endl;
            cout << "3. Salir" << endl;
            cout << "Elige una opción: ";
            cin >> opcion;

            switch (opcion) {
            case 1: {
                Candidato nuevoCandidato;

                cin.ignore(); // Para limpiar el buffer de entrada

                cout << "Cedula: ";
                getline(cin, nuevoCandidato.cedula);

                cout << "Nombre: ";
                getline(cin, nuevoCandidato.nombre);

                cout << "Apellido: ";
                getline(cin, nuevoCandidato.apellido);

                cout << "Partido: ";
                getline(cin, nuevoCandidato.partido);

                // Suponiendo que el status se autoasigna
                cout << "Status (Se autogenerará): ";
                getline(cin, nuevoCandidato.status);

                try {
                    i.Registrar(nuevoCandidato);
                    cout << "Candidato " << nuevoCandidato.cedula << " agregado correctamente" << endl;
                }
                catch (const std::exception& e) {
                    cerr << "Error: " << e.what() << endl;
                }
                break;
            }
            case 2:
                i.MostrarCandidatosInscritos();
                break;
            case 3:
                cout << "Saliendo del sistema de gestion de candidatos." << endl;
                break;
            default:
                cout << "Opcion no valida. Intenta de nuevo." << endl;
            }

            if (opcion != 3) {
                cout << "¿Deseas realizar otra accion? Si (1) No (0): ";
                cin >> opcion;
                if (opcion == 0) {
                    opcion = 3; // Para salir del bucle
                }
            }
        } while (opcion != 3);
    }
    else {
        cout << "Saliendo del programa." << endl;
    }

    return 0;
}
