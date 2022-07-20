#include "Libro.h"
Libro::Libro(){
    issn=paginas=0;
    titulo=editorial=edicion="INDEFINIDO";
}
Libro::~Libro(){}
void Libro:: setIssn(int aux){
    issn=aux;
}
void Libro:: setPaginas(int aux){
    paginas=aux;
}
void Libro:: setTitulo(string aux){
    titulo=aux;
}
void Libro:: setEditorial(string aux){
    editorial=aux;
}
void Libro:: setEdicion(string aux){
    edicion=aux;
}
void Libro::adicionarPalabra(Palabras_Clave *clave1){
    Palabras_Clave *palabra;
    palabra=clave1;
}
void Libro::adicionarAutor(Autor *a){
    Autor *autor;
    autor=a;
}
int Libro:: getIssn(){
    return issn;
}
int Libro:: getPaginas(){
    return paginas;
}
string Libro:: getTitulo(){
    return titulo;
}
string Libro:: getEditorial(){
    return editorial;
}
string Libro:: getEdicion(){
    return edicion;
}
