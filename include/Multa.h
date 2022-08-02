#ifndef MULTA_H
#define MULTA_H
#include<string.h>
#include<conio.h>
#include<iostream>
#include<Prestamo.h>
using namespace std;
class Prestamo;
class Multa
{
    public:
        Multa();
        ~Multa();
        void setFechaMulta(string fechaMora);
        void setValorMulta(int saldo);
        string getFechaMulta();
        int getValorMulta();
    private:
        string fechaMulta;
        int valor_multa;
};
#endif // MULTA_H
