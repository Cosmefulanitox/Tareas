#ifndef TAREA_H
#define TAREA_H
#include <iostream>
#include <cstring>
#include "Fecha.h"

class Tarea
{
    private:
        int _id;
        char _nombre [30];
        int _dificultad;
        Fecha fechaLimite;
        bool _estado;
    public:
        Tarea();
        Tarea(int id,char *n, int d, Fecha f, bool e);
        int getId();
        char *getNombre();
         int getDificultad();
         std::string getFechalimite();
         Fecha getFecha();
         bool getEstado();
         void setNombre(char *n);
         void setDificultad(int num);
         void setFechalimite(int dd,int mm , int yyyy);
         void setEstado(bool est);
         void setId(int i);
         void mostrar();
         void cargarTarea();
          void cargarDefault();




};

#endif // TAREA_H
