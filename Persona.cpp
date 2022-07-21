#include "Persona.h"
#include "Residencia.h"
Persona::Persona()
{

}
Persona::~Persona()
{

}
void Persona::setNombre(string name)
{
    nombre = name;
}
void Persona::setFechaNacimiento(string bornDate)
{
    fechaNacimiento = bornDate;
}
void Persona::setIdentidad(int id)
{
    identidad = id;
}
void Persona::setGenero(int genre)
{
    genero = genre;
}
string Persona::getNombre()
{
    return nombre;
}
string Persona::getFechaNacimineto()
{
    return fechaNacimiento;
}
int Persona::getIdentidad()
{
    return identidad;
}
int Persona::getGenero()
{
    return genero;
}
void Persona::getResidencia(Residencia casaI)
{
    cout<<"DIRECCION:"<<casaI.getDireccion()<<endl;
    cout<<"CIUDAD:"<<casaI.getCiudad()<<endl;
    cout<<"BARRIO:"<<casaI.getBarrio()<<endl;
}
void Persona::setResidencia(Residencia casaI)
{
    Residencia c1;
    c1=casaI;
}
