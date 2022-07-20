#include "Autor.h"
Autor::Autor(){}
Autor::~Autor(){}
void Autor::setTipo_lit(string litgenere){
    tipo_lit = litgenere;
}
void Autor::setCod_auto(int authorcode){
    cod_auto = authorcode;
}
void Autor::adicionarLibro(Libro *clave1){
    for(int i=0;i<10;i++){
        if(libros[i]->getPaginas()==0){
            libros[i]=clave1;
        }
    }
}
string Autor::getTipo_lit(){
    return tipo_lit;
}
int Autor::getCod_auto(){
    return cod_auto;
}
