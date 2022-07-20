#ifndef LISTAS_H
#define LISTAS_H
#include"Libro.h"
#include<iostream>
using namespace std;
class ListaS{
    private:
        Libro *dato;
        ListaS *sig;
    public:
        void crearCab(ListaS *&cab,Libro *dato);
        void agregarNodo(ListaS *&cab,Libro *dato);
        void mostrarLista(ListaS *cab);
};
#endif // LISTAS_H
