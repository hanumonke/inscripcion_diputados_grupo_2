#include <iostream>
#include "Inscripcion.h"
using namespace std;

int main()
{
    Inscripcion i;


    cout << "Probando Inscribir un Candidato" << endl;
    cout << "Introduzca los datos del candidato" << endl;

    // Menu
    int inscribirUnCandidato = 1; 
    
    while (inscribirUnCandidato == 1) {

    Candidato nuevoCandidato;

    cin.ignore();
    cout << "Cedula: " << endl;
    getline(cin, nuevoCandidato.cedula);
  

    cout << "Nombre: " << endl;
    getline(cin, nuevoCandidato.nombre);
    

    cout << "Apellido: " << endl;
    getline(cin, nuevoCandidato.apellido);
  
    
    cout << "Partido: " << endl;
    getline(cin, nuevoCandidato.partido);
 
    // falta autoiniciar status y hacerlo pila xd
    cout << "Status: " << endl;
    getline(cin, nuevoCandidato.status);
   
    try
    {
        i.Registrar(nuevoCandidato);
        // lc.InsFinal(nuevoCandidato); 
        cout << "Candidato " << nuevoCandidato.cedula << " agregado correctamente" << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }


    cout << "Deseas inscribir otro candidato? Si (1) No (0)";
    cin >> inscribirUnCandidato; 
    }


    i.MostrarCandidatosInscritos(); 
    i.MostrarCandidatosInscritos();
   
}
