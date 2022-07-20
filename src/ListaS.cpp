#include "ListaS.h"
void ListaS:: crearCab(ListaS *&cab,Libro *dato){
        cab = new ListaS;
        cab->dato = dato;
        cab->sig=cab;
    }
void ListaS:: agregarNodo(ListaS *&cab,Libro *dato){
        ListaS *aux=cab;
        while(aux->sig!=cab)//avanza el apuntador al final
            aux = aux->sig;
        aux->sig=new ListaS;//crear un nuevo nodo
        aux=aux->sig;//avanzo el apuntador ya esta enlazado su parteanterior
        aux->dato = dato;//Libroroduzco el dato
        aux->sig=cab;//enlazo el final de la lista con la cabeza siguientdo la estructura de la Listas Circulares
    }
void ListaS:: mostrarLista(ListaS *cab){
        ListaS *aux=cab;
        while (aux->sig!=cab){
            cout<<"Dato: "<<aux->dato<<endl;
            aux= aux->sig;
        }
        cout<<"Dato: "<<aux->dato<<endl;
        system("pause");
    }
