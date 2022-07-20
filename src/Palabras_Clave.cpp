#include "Palabras_Clave.h"

Palabras_Clave::Palabras_Clave(){}
Palabras_Clave::~Palabras_Clave(){}
void Palabras_Clave:: setNombre(string aux){
    nombre=aux;
}
void Palabras_Clave:: setNumero(int aux){
    numero=aux;
}
void Palabras_Clave:: adicionarLibro(Libro *clave1,ListaS *&cab){
    if(!cab){
        cab->crearCab(cab,clave1);
    }else{
        cab->agregarNodo(cab,clave1);
    }
}
string Palabras_Clave:: getNombre(){
    return nombre;
}
int Palabras_Clave:: getNumero(){
    return numero;
}