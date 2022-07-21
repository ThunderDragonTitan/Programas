#ifndef LECTOR_H
#define LECTOR_H
#include <Estudiante.h>
#include <Profesor.h>
#include <Prestamo.h>
class Lector : public Estudiante , public Profesor
{
    public:
        Lector();
        ~Lector();
        void setEstado(int status);
        int getEstado();
        void addPrestamo(Prestamo archivo);
    private:
        int estado;
};

#endif // LECTOR_H
