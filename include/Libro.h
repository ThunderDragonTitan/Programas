#ifndef LIBRO_H
#define LIBRO_H
#include<string.h>
#include<iostream>
#include "Palabras_Clave.h"
#include "Autor.h"
#include "Ejemplares.h"
using namespace std;
class Libro{
    private:
        int issn,paginas,cantidad;
        string titulo,editorial,edicion;
    public:
        Libro();
        ~Libro();
        void setIssn(int);
        void setPaginas(int);
        void setTitulo(string);
        void setEditorial(string);
        void setEdicion(string);
        void adicionarPalabra(Palabras_Clave *clave1);
        void adicionarAutor(Autor *a);
        void setEjemplares(Ejemplares *ej);
        int getIssn();
        int getPaginas();
        string getTitulo();
        string getEditorial();
        string getEdicion();
};

#endif // LIBRO_H
