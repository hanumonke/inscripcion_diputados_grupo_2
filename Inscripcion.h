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
// Mostrar todos los candidatos
    void MostrarCandidatosInscritos(); 
// Buscar un candidato por cedula
    Candidato BuscarCandidato(string cedula); 
// Eliminar
    void EliminarCandidato(string cedula);

// Modificar

// Reportes
};

#endif
