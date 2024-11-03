#include "Inscripcion.h"
#include <iostream>

// Registrar
 bool Inscripcion::Registrar(Candidato c) {
        // validaciones
        if (c.nombre == "" && c.apellido == "" && c.cedula != "" && c.partido != "" ){
                cout << "No pueden haber campos vacios" << endl; 
                return false; 
            }

        // revisar que el candidato no este inscrito


        // revisar si hay espacio para un nuevo candidato
        if (listaCandidatos.Contar() >= 25) { 
            cout << "La lista de candidatos esta llena" << endl; 
            return false;
         }  

        // Revisar cantidad de partidos
        if (listaPartidos.Contar() >= 5) {
            cout << "Ya se inscribieron el numero maximo de partidos" << endl; 
            return false; 
        }

        // revisar si el candidato pertenece a algun partido, de no pertenecer, agregar el nuevo partido
        // revisar si el partido del candidato tiene espacio


        // finalmente, agregamos el candidato a la lista
        listaCandidatos.InsFinal(c); 

        cout << "Candidato " << c.cedula << " " << c.nombre << " del partido " << c.partido << " agregado correctamente." << endl; 

        return true; 
        }
        
    
// Consultar

    void Inscripcion::MostrarCandidatosInscritos() {
        Candidato marca;
        marca.cedula = "$$$"; 
        marca.nombre = "$$$"; 
        marca.apellido = "$$$"; 
        marca.partido = "$$$"; 
        listaCandidatos.InsFinal(marca); 
        Candidato actual = listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero());

        while (actual.cedula != marca.cedula) {
            int counter = 1;
            cout << "Candidato " << counter << endl; 
            cout << "Cedula: " << actual.cedula;  
            cout << "Nombre Completo: " << actual.nombre << " " << actual.apellido;  
            cout << "Partido: " << actual.partido;
            cout << "Status: " << actual.status; 

            counter++; 
        } 

    }

// Eliminar

// Modificar

// Reportes



