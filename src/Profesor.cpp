#include "Profesor.h"
Profesor::Profesor()
{

}
Profesor::~Profesor()
{

}
void Profesor::setSerial(int cod)
{
    serial = cod;
}
void Profesor::setArea(string area_)
{
    area = area_;
}
int Profesor::getSerial()
{
    return serial;
}
string Profesor::getArea()
{
    return area;
}
