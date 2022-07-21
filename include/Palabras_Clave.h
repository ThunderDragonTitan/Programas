#ifndef PALABRAS_CLAVE_H
#define PALABRAS_CLAVE_H
#include<string.h>
#include<iostream>
#include <Libro.h>
using namespace std;
class Palabras_Clave{
    private:
        int numero;
        string nombre;
    public:
        Palabras_Clave();
        ~Palabras_Clave();
        void setNombre(string);
        void setNumero(int);
        string getNombre();
        int getNumero();
};

#endif // PALABRAS_CLAVE_H
