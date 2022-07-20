#ifndef LIBRO_H
#define LIBRO_H
#include<string.h>
#include<iostream>
using namespace std;
class Libro{
    private:
        int issn,paginas;
        string titulo,editorial,edicion;
    public:
        Libro();
        virtual ~Libro();
        void setIssn(int);
        void setPaginas(int);
        void setTitulo(string);
        void setEditorial(string);
        void setEdicion(string);
        // void setEjemplares(ejemplares ej1);
        int getIssn();
        int getPaginas();
        string getTitulo();
        string getEditorial();
        string getEdicion();
};

#endif // LIBRO_H
