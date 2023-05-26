#ifndef LISTATAREA_H
#define LISTATAREA_H
#include <string>
#include "Tarea.h"

class ListaDetarea
{
     private:
         Tarea tar[10];
    public:
       void cargarTareas();
       void mostrarTareas();
       void cambiarestado();
       int diasPendientes(int id);
       void mostrarTareaunica(int id);
       void modificarTarea(int id);



};

#endif // LISTATAREA_H
