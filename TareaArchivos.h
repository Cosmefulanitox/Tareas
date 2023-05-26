#ifndef TAREAARCHIVOS_H
#define TAREAARCHIVOS_H
#include "Tarea.h"

class TareaArchivos
{
private:
    std::string nombre;

public:
    TareaArchivos(std::string nom);
     TareaArchivos();
     void guardarRegistro(Tarea reg);
     void modificarRegistro (int id);
    Tarea buscarRegistro(int id);
     int cantidadDeRegistros();
};

#endif // TAREAARCHIVOS_H
