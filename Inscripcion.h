#ifndef Inscripcion_H
#define Inscripcion_H
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std; 


struct Candidato 
{
    string nombre = "";
    string apellido = ""; 
    string partido = "";
    string cedula = "";
    string status = "disponible";
    int votos = 0;

};

class Inscripcion {
    private: 
        Lista<Candidato> listaCandidatos;
        int contadorCandidatos;
        Lista<string> listaPartidos; 
    public:

// Registrar
    bool Registrar(Candidato c);
// Consultar

// Eliminar

// Modificar

// Reportes
};

#endif
