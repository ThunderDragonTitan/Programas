#ifndef EJEMPLARES_H
#define EJEMPLARES_H
#include "Libro.h"
#include<string.h>
#include<iostream>
using namespace std;
class Ejemplares{
    public:
        Ejemplares();
        ~Ejemplares();
        void setNumEjemplares(int);
        void setEstado(string);
        void setLibro(Libro);
        string getEstado();
        int getNumEjemplares();

    private:
        int num_ejemplares;
        string estado;
};

#endif // EJEMPLARES_H
