#ifndef AUTOR_H
#define AUTOR_H
#include <Persona.h>
#include<string.h>
#include<conio.h>
#include<iostream>
#include"Libro.h"
class Libro;
class Autor : public Persona{
    public:
        Autor();
        ~Autor();
        void setTipo_lit(string litgenere);
        void setCod_auto(int authorcode);
        void adicionarLibro(Libro *clave1);
        string getTipo_lit();
        int getCod_auto();
    private:
        string tipo_lit;
        int cod_auto;
        Libro *libros[10];
};

#endif // AUTOR_H
