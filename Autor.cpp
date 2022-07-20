#include "Autor.h"
Autor::Autor()
{

}
Autor::~Autor()
{
}
void Autor::setTipo_lit(string litgenere)
{
    tipo_lit = litgenere;
}
void Autor::setCod_auto(int authorcode)
{
    cod_auto = authorcode;
}
string Autor::getTipo_lit()
{
    return tipo_lit;
}
int Autor::getCod_auto()
{
    return cod_auto;
}
