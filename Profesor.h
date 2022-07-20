#ifndef PROFESOR_H
#define PROFESOR_H
#include <Persona.h>
#include<string.h>
#include<conio.h>
#include<iostream>

class Profesor : public virtual Persona
{
    public:
        Profesor();
        ~Profesor();
        void setSerial(int cod);
        void setArea(string area_);
        int getSerial();
        string getArea();
    private:
        int serial;
        string area;
};

#endif // PROFESOR_H
