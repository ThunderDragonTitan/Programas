#include "Ejemplares.h"
Ejemplares::Ejemplares(){
    //ctor
}
Ejemplares::~Ejemplares(){
    //dtor
}
void Ejemplares:: setNumEjemplares(int aux){
    num_ejemplares=aux;
}
void Ejemplares:: setEstado(string aux){
    estado=aux;
}
void Ejemplares:: setLibro(Libro aux){
    if(aux.getIssn()!=0)
        num_ejemplares+=1;
}
string Ejemplares:: getEstado(){
    return estado;
}
int Ejemplares:: getNumEjemplares(){
    return num_ejemplares;
}