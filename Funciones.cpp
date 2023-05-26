#include "string"

#include "Funciones.h"

void ordenarTareas(Tarea *tar)
{
    Tarea au;
    std::string aux1,aux2;
    for(int x=0;x<4;x++)
    {
        for(int i=0;i<4;i++)
        {
            aux1=tar[i].getFechalimite();
            aux2=tar[i+1].getFechalimite();
            if (aux1.compare(aux2)==-1)
            {
                au=tar[i];
                tar[i]=tar[i+1];
                tar[i+1]=au;
            }

        }
    }

}

Fecha fechaHoy()
{
    time_t t;
t=time(NULL);
struct tm *fecha;
fecha=localtime(&t);
Fecha aux(fecha->tm_mday,fecha->tm_mon+1,fecha->tm_year+1900);

return aux;
}
