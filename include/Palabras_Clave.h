#ifndef PALABRAS_CLAVE_H
#define PALABRAS_CLAVE_H
#include<string.h>
#include<iostream>
#include <Libro.h>
#include <ListaS.h>
using namespace std;
class Palabras_Clave{
    private:
        int numero;
        string nombre;
    public:
        Palabras_Clave();
        virtual ~Palabras_Clave();
        void setNombre(string);
        void setNumero(int);
        void adicionarLibro(Libro *clave1,ListaS *&cab);
        string getNombre();
        int getNumero();
};

#endif // PALABRAS_CLAVE_H
