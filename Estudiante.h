#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <Persona.h>
class Estudiante : public virtual Persona
{
    public:
        Estudiante();
        ~Estudiante();
        void setCodigo(int code);
        void setPrograma(string program);
        string getPrograma();
        int getCodigo();
    private:
        string programa;
        int codigo;
};
#endif // ESTUDIANTE_H
