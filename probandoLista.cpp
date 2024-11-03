#include <iostream>
#include "Lista.h"
using namespace std;


int main() {
    Lista<int> listaPrueba; 
    int primero, segundo;
    cout << "Introduzca el primer numero"; 
    cin >> primero;
    cout << "Introduzca el segundo numero"; 
    cin >> segundo;

    listaPrueba.InsFinal(primero); 
    listaPrueba.InsFinal(segundo); 

    cout << listaPrueba.ObtInfo(listaPrueba.ObtPrimero()); 

    listaPrueba.EliComienzo(primero); 

    cout << listaPrueba.ObtInfo(listaPrueba.ObtPrimero());

}
