#include<string>
#include<conio.h>
#include<iostream>
#include "Persona.h"
#include "Residencia.h"
using namespace std;
int main()
{
    Residencia casaI;
    casaI.setDireccion("CRA 12 BIS #34C - 17 SUR");
    casaI.setBarrio("PIJAOS");
    casaI.setCiudad("BOGOTA");

    Persona PI;
    PI.setNombre("DANIEL FLOREZ");
    PI.setFechaNacimiento("21/01/1999");
    PI.setIdentidad(1023974);
    PI.setGenero(1);

    cout<<PI.getNombre()<<endl;
    cout<<PI.getFechaNacimineto()<<endl;
    cout<<PI.getIdentidad()<<endl;
    cout<<PI.getGenero()<<endl;
    PI.setResidencia(casaI);
    return 0;
}

