#include "Inscripcion.h"
#include <iostream>

// Registrar
 bool Inscripcion::Registrar(Candidato c) {
        // validaciones
        if (c.nombre == "" && c.apellido == "" && c.cedula != "" && c.partido != "" ){
                cout << "No pueden haber campos vacios" << endl; 
                return false; 
            }
        if (listaCandidatos.Contar() >= 25) { 
            cout << "La lista de candidatos esta llena" << endl; 
            return false;
         }  

        // Revisar cantidad de partidos
        if (listaPartidos.Contar() >= 5) {
            cout << "Ya se inscribieron el numero maximo de partidos" << endl; 

            return false; 
        }
        // si el partido existe tons revisamos cuantos candidatos tiene
  
        if (listaPartidos.Buscar(c.partido)) {
            // contador de candidatos por partido
            int candidatosPorPartido = 0; 

            // iteraremos sobre la lista de candidatos
            for (int i = 0; i < listaCandidatos.Contar(); i++) {
                // colocamos la marca 
                Candidato marca;
                marca.nombre = "$$$"; 
                marca.apellido = "$$$"; 
                marca.partido = "$$$"; 
                marca.status = "$$$"; 
                marca.votos = -1; 
                listaCandidatos.InsFinal(marca); 
                

                // iteramos hasta encontrar la marca al principio
                while (listaCandidatos.ObtInfo(listaCandidatos.ObtPrimero()).cedula != marca.cedula) 
                {
                    //extraemos el primer nodo para mirarlo
                    nodo<Candidato>* current = listaCandidatos.ObtPrimero(); 
                    Candidato currentInfo = listaCandidatos.ObtInfo(current);
                    if (currentInfo.partido == c.partido) {
                        candidatosPorPartido++; }
                    listaCandidatos.InsFinal(currentInfo);
                    listaCandidatos.EliComienzo(currentInfo);  
                }

                // eliminamos la marca
                listaCandidatos.EliComienzo(marca); 

                // verificamos el numero de candidatos por partido de c
                if (candidatosPorPartido > 5) {
                    cout << "Ya se ha alcanzado el maximo numero de candidatos para el partido " << c.partido << endl; 
                    return false; 
                }
                }


            }

        // finalmente, agregamos el candidato a la lista
        listaCandidatos.InsFinal(c); 

        cout << "Candidato " << c.cedula << " " << c.nombre << " del partido " << c.partido << " agregado correctamente." << endl; 

        return true; 
        }
        
    
// Consultar

// Eliminar

// Modificar

// Reportes



