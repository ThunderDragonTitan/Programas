#include<string>
#include<conio.h>
#include<iostream>
#include "Residencia.h"
#include "Lector.h"
#include "Palabras_Clave.h"
#include "Libro.h"
#include "Ejemplares.h"
#include "Autor.h"
#include "Prestamo.h"
#include "Multa.h"
using namespace std;
int main()
{
    Palabras_Clave clave1,clave2,clave3;
    Residencia casaI,c2,c3;
    casaI.setDireccion("CRA 12 BIS #34C - 17 SUR");
    casaI.setBarrio("PIJAOS");
    casaI.setCiudad("BOGOTA");
    c2.setDireccion("CALL 126 #4C - 18 NORTE-SUR");
    c2.setBarrio("BOSA");
    c2.setCiudad("BOGOTA");
    c3.setDireccion("AUT 45 #54C - 15 NORTE");
    c3.setBarrio("SUBA");
    c3.setCiudad("BOGOTA");

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
    LI.setResidencia(casaI);

    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<LI.getNombre()<<endl;
    cout<<LI.getPrograma()<<endl;
    cout<<LI.getArea()<<endl;
    cout<<LI.getGenero()<<endl;
    cout<<LI.getCodigo()<<endl;
    cout<<LI.getSerial()<<endl;
    cout<<LI.getFechaNacimineto()<<endl;
    cout<<LI.getIdentidad()<<endl;
    cout<<LI.getEstado()<<endl;
    cout<<"P1"<<endl;

    clave1.setNombre("MONO");
    clave1.setNumero(1);
    clave2.setNombre("CALCULO");
    clave2.setNumero(2);
    clave3.setNombre("SOLEDAD");
    clave3.setNumero(3);

    Autor a1,a2,a3;
    a1.setNombre("Mariao Josefino");
    a1.setResidencia(c2);
    a1.setIdentidad(2103);
    a1.setGenero(1);
    a1.setFechaNacimiento("04/11/2004");
    a1.setTipo_lit("EROTICO");
    a1.setCod_auto(1);

    a2.setNombre("Chichon-Chan");
    a2.setResidencia(c3);
    a2.setIdentidad(3452);
    a2.setGenero(1);
    a2.setFechaNacimiento("12/12/1999");
    a2.setTipo_lit("INVESTIGADOR");
    a2.setCod_auto(2);
    a3.setNombre("El pepe");
    a3.setResidencia(c3);
    a3.setIdentidad(1234);
    a3.setGenero(1);
    a3.setFechaNacimiento("30/09/1994");
    a3.setTipo_lit("DRAMATICO");
    a3.setCod_auto(3);
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------AUTOR-----------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<a1.getNombre()<<endl;
    a1.getResidencia(c2);
    cout<<a1.getIdentidad()<<endl;
    cout<<a1.getGenero()<<endl;
    cout<<a1.getFechaNacimineto()<<endl;
    cout<<a1.getTipo_lit()<<endl;
    cout<<a1.getCod_auto()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------AUTOR-----------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<a2.getNombre()<<endl;
    a2.getResidencia(c3);
    cout<<a2.getIdentidad()<<endl;
    cout<<a2.getGenero()<<endl;
    cout<<a2.getFechaNacimineto()<<endl;
    cout<<a2.getTipo_lit()<<endl;
    cout<<a2.getCod_auto()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------AUTOR-----------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<a3.getNombre()<<endl;
    a3.getResidencia(c3);
    cout<<a3.getIdentidad()<<endl;
    cout<<a3.getGenero()<<endl;
    cout<<a3.getFechaNacimineto()<<endl;
    cout<<a3.getTipo_lit()<<endl;
    cout<<a3.getCod_auto()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    Ejemplares ej1,ej2,ej3;
    Libro l1,l2,l3;
    ej1.setEstado("PERFECTO");
    ej1.setNumEjemplares(45);
    ej1.setLibro(l1);
    ej2.setEstado("DOBLECES");
    ej2.setNumEjemplares(30);
    ej2.setLibro(l2);
    ej3.setEstado("DAÑADO");
    ej3.setNumEjemplares(10);
    ej3.setLibro(l3);
    l1.setIssn(3456);
    l1.setPaginas(230);
    l1.setTitulo("EL LOBO Y EL MONO");
    l1.setEdicion("ESPANOL EDIT 3");
    l1.setEditorial("PLANETA");
    l1.adicionarAutor(a1);
    l1.adicionarPalabra(clave1);
    l2.setIssn(8765);
    l2.setPaginas(456);
    l2.setTitulo("CALCULO PARA LLORAR");
    l2.setEdicion("MANDARIN EDIT 5");
    l2.setEditorial("LECTORUM");
    l2.adicionarAutor(a2);
    l2.adicionarPalabra(clave2);
    l3.setIssn(2345);
    l3.setPaginas(234);
    l3.setTitulo("100 ANOS DE SOLEDAD");
    l3.setEdicion("RUSO EDIT 1");
    l3.setEditorial("ALIANZA EDITORIAL");
    l3.adicionarAutor(a3);
    l3.adicionarPalabra(clave3);
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------LIBRO-----------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<l1.getIssn()<<endl;
    cout<<l1.getPaginas()<<endl;
    cout<<l1.getTitulo()<<endl;
    cout<<l1.getEdicion()<<endl;
    cout<<l1.getEditorial()<<endl;
    cout<<ej1.getEstado()<<endl;
    cout<<ej1.getNumEjemplares()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------LIBRO-----------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<l2.getIssn()<<endl;
    cout<<l2.getPaginas()<<endl;
    cout<<l2.getTitulo()<<endl;
    cout<<l2.getEdicion()<<endl;
    cout<<l2.getEditorial()<<endl;
    cout<<ej2.getEstado()<<endl;
    cout<<ej2.getNumEjemplares()<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------LIBRO-----------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<l3.getIssn()<<endl;
    cout<<l3.getPaginas()<<endl;
    cout<<l3.getTitulo()<<endl;
    cout<<l3.getEdicion()<<endl;
    cout<<l3.getEditorial()<<endl;
    cout<<ej3.getEstado()<<endl;
    cout<<ej3.getNumEjemplares()<<endl;

    Prestamo archivo;

    archivo.setTiempoDias(7);
    archivo.setFechaPrestamo("20/07/2022");

    Lector PRI;
    PRI.addPrestamo(archivo);
    return 0;
}

