#ifndef PERSONA_H
#define PERSONA_H
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Residencia;
class Persona
{
    public:
        Persona();
        ~Persona();
        void setNombre(string name);
        void setFechaNacimiento(string bornDate);
        void setIdentidad(int id);
        void setGenero(int genre);
        string getNombre();
        string getFechaNacimineto();
        int getIdentidad();
        int getGenero();
        void getResidencia(Residencia casaI);
        void setResidencia(Residencia casaI);
    private:
        string nombre,fechaNacimiento;
        int identidad,genero;
};
#endif // PERSONA_H
