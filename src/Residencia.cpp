#include "Residencia.h"
Residencia::Residencia()
{
}
Residencia::~Residencia()
{

}
void Residencia::setDireccion(string address)
{
    direccion = address;
}
void Residencia::setCiudad(string city)
{
    ciudad = city;
}
void Residencia::setBarrio(string neighborhood)
{
    barrio = neighborhood;
}
string Residencia::getDireccion()
{
    return direccion;
}
string Residencia::getCiudad()
{
    return ciudad;
}
string Residencia::getBarrio()
{
    return barrio;
}
