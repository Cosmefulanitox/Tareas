#include <stdio.h>
#include <cstring>
#include "TareaArchivos.h"


TareaArchivos::TareaArchivos(std::string nom)
{
 nombre=nom;
}

TareaArchivos::TareaArchivos()
{
  nombre="archivosTarea.dat";
}

void TareaArchivos::guardarRegistro(Tarea reg)
{
    FILE *p= fopen(nombre.c_str(),"ab");
    bool res;
    if (p==nullptr)
    {
         std::cout<<"El registro no pudo abrirse"<<std::endl;

    }
    res=fwrite(&reg,sizeof(Tarea),1,p);
        if (res==1)
    {

        std::cout<<"El registro fue correctamente guardad"<<std::endl;
    }
    else
    {
        std::cout<<"El registro"<<std::endl;
    }
    fclose(p);

}

void TareaArchivos::modificarRegistro (int id)
{

}

Tarea TareaArchivos::buscarRegistro(int id)
{
    Tarea aux;

     FILE *p=fopen(nombre.c_str(),"rb");
    if(p==nullptr)
    {

        return aux;
    }

    for(int x=0;x<cantidadDeRegistros();x++)
    {
        fread(&aux,sizeof(Tarea),1,p);
        if (id==aux.getId())
        {
            fclose(p);
            return aux;
        }


    }
    fclose(p);
     return aux;


}

int TareaArchivos::cantidadDeRegistros()
{
    int reg;
    FILE *p=fopen(nombre.c_str(),"rb");
    if(p==nullptr)
    {
        fclose(p);
        return -1;
    }
    fseek(p,sizeof(Tarea),SEEK_END);
    reg=ftell(p)/sizeof(Tarea);
    fclose(p);
    return reg;


}
















