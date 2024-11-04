#include "Inscripcion.h"
#include <iostream>

// Registrar
 bool Inscripcion::Registrar(Candidato c) {
        // validaciones
        if (c.nombre.empty() && c.apellido.empty() && c.cedula.empty() && c.partido.empty()){
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

        // // revisar si el candidato pertenece a algun partido, de no pertenecer, agregar el nuevo partido
        // if (listaPartidos.Buscar(c.partido)) {
        //     cout << "El partido ya existe!" << endl; 
        // // revisar si el partido del candidato tiene espacio
        // int contadorPartido = 0;
        // // crear marca 
        // Candidato marca; 
        // marca.cedula = "$$$"; 
        // listaCandidatos.InsFinal(marca);

        // while (listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero()).cedula != marca.cedula) {
        //     Candidato actual = listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero());
            
        //     if (actual.partido == c.partido) {
        //         contadorPartido++;
        //     }

        //     listaCandidatos.InsFinal(actual);
        //     listaCandidatos.AsigPrimero(listaCandidatos.ObtProx(listaCandidatos.ObtPrimero()));
             
        // } 

        // Candidato primero = listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero()); 
        // if (primero.cedula == marca.cedula) {
        //     listaCandidatos.EliComienzo(marca); 
        //     cout << "eliminada la marca!" << endl; 
        // }

        // cout << "el partido " << c.partido << " tiene " << contadorPartido << " candidatos" << endl; 

        // }


        // finalmente, agregamos el candidato a la lista
        listaCandidatos.InsFinal(c);



        return true; 
        }
        
 
// Consultar

    void Inscripcion::MostrarCandidatosInscritos() {
        int counter = 1;

        if (listaCandidatos.Vacia()) cout << "Lista vacia" << endl;

        // crear marca 
        Candidato marca; 
        marca.cedula = "$$$"; 
        listaCandidatos.InsFinal(marca);

        while (listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero()).cedula != marca.cedula) {
            Candidato actual = listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero());
            cout << "Candidato " << counter << endl; 
            cout << " Cedula: " << actual.cedula;  
            cout << " Nombre Completo: " << actual.nombre << " " << actual.apellido;  
            cout << " Partido: " << actual.partido;
            cout << " Status: " << actual.status << endl;

            listaCandidatos.InsFinal(actual);
            listaCandidatos.AsigPrimero(listaCandidatos.ObtProx(listaCandidatos.ObtPrimero()));
            
            cout << endl;
            counter++; 
        } 
        Candidato primero = listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero()); 
        if (primero.cedula == marca.cedula) {
            listaCandidatos.EliComienzo(marca); 
            cout << "eliminada la marca!" << endl; 
        }

    }

// Eliminar

// Modificar

// Reportes



