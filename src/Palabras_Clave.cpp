#include "Palabras_Clave.h"

Palabras_Clave::Palabras_Clave(){
    numero=0;
    nombre="INDEFINIDO";
}
Palabras_Clave::~Palabras_Clave(){}
void Palabras_Clave:: setNombre(string aux){
    nombre=aux;
}
void Palabras_Clave:: setNumero(int aux){
    numero=aux;
}
string Palabras_Clave:: getNombre(){
    return nombre;
}
int Palabras_Clave:: getNumero(){
    return numero;
}