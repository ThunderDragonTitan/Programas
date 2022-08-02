#ifndef PRESTAMO_H
#define PRESTAMO_H
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Multa;
class Prestamo
{
    public:
        Prestamo();
        ~Prestamo();
        void setTiempoDias(int mora);
        void setFechaPrestamo(string date);
        int getTiempoDias();
        string getFechaPrestamo();
        void setMulta(Multa saldoI);
    private:
        int tiempoDias;
        string fechaPrestamo;
};
#endif // PRESTAMO_H
