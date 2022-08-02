#include <Prestamo.h>
#include <Multa.h>
Prestamo::Prestamo()
{

}
Prestamo::~Prestamo()
{

}
void Prestamo::setTiempoDias(int mora)
{
    tiempoDias = mora;
}
void Prestamo::setFechaPrestamo(string date)
{
    fechaPrestamo = date;
}
int  Prestamo::getTiempoDias()
{
    return tiempoDias;
}
string Prestamo::getFechaPrestamo()
{
    return fechaPrestamo;
}
void Prestamo::setMulta(Multa saldoI)
{
    cout<<"SALDO MULTA:"<<saldoI.getFechaMulta()<<endl;
    cout<<"FECHA MULTA:"<<saldoI.getValorMulta()<<endl;
}
