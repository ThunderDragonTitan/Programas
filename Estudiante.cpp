#include "Estudiante.h"
Estudiante::Estudiante()
{

}
Estudiante::~Estudiante()
{

}
void Estudiante::setCodigo(int code)
{
    codigo = code;
}
void Estudiante::setPrograma(string program)
{
    programa = program;
}
string Estudiante::getPrograma()
{
    return programa;
}
int Estudiante::getCodigo()
{
    return codigo;
}
