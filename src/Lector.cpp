#include "Lector.h"
Lector::Lector()
{

}
Lector::~Lector()
{

}
void Lector::setEstado(int status)
{
    estado = status;
}
int Lector::getEstado()
{
    return estado;
}
void Lector::addPrestamo(Prestamo archivo)
{
    Prestamo documento;
    documento = archivo;

    cout<<"FECHA PRESTAMO:"<<archivo.getFechaPrestamo()<<endl;
    cout<<"DIAS DE MORA:"<<archivo.getTiempoDias()<<endl;

}