#include <iostream>
#include "Lista.h"
#include "Inscripcion.h"
using namespace std;

int main()
{
    Inscripcion i;

    cout << "Probando Inscribir un Candidato" << endl;
    cout << "Introduzca los datos del candidato" << endl;
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
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
