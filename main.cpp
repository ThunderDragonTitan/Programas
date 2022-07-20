#include<string>
#include<conio.h>
#include<iostream>
// #include "Persona.h"
// #include "Residencia.h"
// #include "Estudiante.h"
// #include "Profesor.h"
#include "Lector.h"
using namespace std;
int main()
{
    // Residencia casaI;
    // casaI.setDireccion("CRA 12 BIS #34C - 17 SUR");
    // casaI.setBarrio("PIJAOS");
    // casaI.setCiudad("BOGOTA");

    // Persona PI;
    // PI.setNombre("DANIEL FLOREZ");
    // PI.setFechaNacimiento("21/01/1999");
    // PI.setIdentidad(1023974);
    // PI.setGenero(1);
/*
    cout<<PI.getNombre()<<endl;
    cout<<PI.getFechaNacimineto()<<endl;
    cout<<PI.getIdentidad()<<endl;
    cout<<PI.getGenero()<<endl;
    PI.setResidencia(casaI);

*/
    // Estudiante EI;
    // EI.setNombre("PEDRO");
    // EI.setCodigo(2021157);
    // EI.setPrograma("SIS. DATOS");
    // cout<<EI.getNombre()<<endl;
    // cout<<EI.getCodigo()<<endl;
    // cout<<EI.getPrograma()<<endl;
    // EI.setResidencia(casaI);


    // Profesor MI;
    // MI.setNombre("ALEX");
    // MI.setSerial(500315);
    // MI.setArea("CIENCIAS BASICAS");
    // cout<<MI.getNombre()<<endl;
    // cout<<MI.getSerial()<<endl;
    // cout<<MI.getArea()<<endl;
    // MI.setResidencia(casaI);

    Lector LI;
    LI.setNombre("FLORENTINO");
    LI.setPrograma("TEC SISTEMATIZACION DE DATOS");
    LI.setArea("C.DE LA COMPUTACION");
    LI.setGenero(1);
    LI.setCodigo(315315);
    LI.setSerial(696969);
    LI.setFechaNacimiento("04/01/1984");
    LI.setIdentidad(1024);
    LI.setEstado(100);

    // LI.setResidencia(casaI);

    cout<<LI.getNombre()<<endl;
    cout<<LI.getPrograma()<<endl;
    cout<<LI.getArea()<<endl;
    cout<<LI.getGenero()<<endl;
    cout<<LI.getCodigo()<<endl;
    cout<<LI.getSerial()<<endl;
    cout<<LI.getFechaNacimineto()<<endl;
    cout<<LI.getIdentidad()<<endl;
    cout<<LI.getEstado()<<endl;
    return 0;
}

