
#include "Multa.h"
Multa::Multa(){
    fechaMulta = "INDEFINIDO";
    valor_multa = 0;
}
Multa::~Multa(){}
void Multa::setFechaMulta(string fechaMora)
{
    fechaMulta = fechaMora;
}
void Multa::setValorMulta(int saldo)
{
    valor_multa = saldo;
}
string Multa::getFechaMulta()
{
    return fechaMulta;
}
int Multa::getValorMulta()
{
    return valor_multa;
}
