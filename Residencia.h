#ifndef RESIDENCIA_H
#define RESIDENCIA_H
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Persona;
class Residencia
{
    public:
        Residencia();
        ~Residencia();
        void setDireccion(string address);
        void setCiudad(string city);
        void setBarrio(string neighborhood);
        string getDireccion();
        string getCiudad();
        string getBarrio();
    private:
        string direccion,ciudad,barrio;
};
#endif // RESIDENCIA_H
