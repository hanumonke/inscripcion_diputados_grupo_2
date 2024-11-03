#include <iostream>
#include "Lista.h"
using namespace std;

    struct cedula {
        char nacionalidad;
        int numero;
    };

int main() {

    Lista<cedula> listaPrueba;
    cedula cedula_hanu;
    cedula_hanu.nacionalidad= 'V'; 
    cedula_hanu.numero = 123456;

    listaPrueba.InsFinal(cedula_hanu);

    cout << listaPrueba.ObtInfo(listaPrueba.ObtPrimero()).nacionalidad << endl;

    
 


}
