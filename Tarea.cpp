#include <iostream>
#include <stdio.h>
#include "Tarea.h"
#include "Fecha.h"



Tarea::Tarea()
{
    cargarDefault();
}
Tarea::Tarea(int id,char *n, int d, Fecha f, bool e)
{
    _id=id;
    strcpy(_nombre,n);
    _dificultad=d;
    fechaLimite=f;
    _estado=e;
}
char* Tarea::getNombre()
{
    return _nombre;
}
int Tarea::getDificultad()
{
    return _dificultad;
}
std::string Tarea::getFechalimite()
{
    std::string fe;
    fe=fechaLimite.toString();

    return fe;
}
Fecha Tarea::getFecha()
{
    return fechaLimite;
}
bool Tarea::getEstado()
{
    return _estado;
}
void Tarea::setNombre(char *n)
{
    strcpy(_nombre, n);
}
void Tarea::setDificultad(int num)
{
    _dificultad=num;
}
void Tarea::setFechalimite(int dd,int mm , int yyyy)
{
    fechaLimite.setDia(dd);
    fechaLimite.setMes(mm);
    fechaLimite.setAnio(yyyy);
}

void Tarea::setEstado(bool est)
{
    _estado=est;
}
void Tarea::setId(int i)
{
 _id=i;
}
int Tarea::getId()
{
    return _id;
}
void Tarea::mostrar()
{
    std::cout<<"ID: "<<getId()<<std::endl;
    std::cout<<"Descripcion de tarea: "<<getNombre()<<std::endl;
    if(_dificultad==1)
    {
         std::cout <<"Dificultad: baja"<<std::endl;
    }else if(_dificultad==2)
    {
        std::cout <<"Dificultad: media"<<std::endl;
    }else
    {  std::cout <<"Dificultad: alta"<<std::endl;}
    std::cout <<"Fecha limite: "<<getFechalimite()<<std::endl;

    if (_estado==0)
    {
         std::cout <<"Estado: Pediente"<<std::endl;
    }else
    {
        std::cout <<"Estado: Hecho"<<std::endl;
    }

}
void Tarea::cargarTarea()
{
    int id,dif,est;
    char nombre[30];
    std::cout<<"Ingrese ID"<<std::endl;
    std::cin>>id;
    std::cout<<"Ingrese descripcion"<<std::endl;
    std::cin.ignore();
    std::cin.getline(nombre,29);
    std::cout<<"Ingrese Dificultad |1=baja / 2=media / 3=alta|"<<std::endl;
    std::cin>>dif;
    while(dif<0||dif>3)
    {
        std::cout<<"Parametro invalido"<<std::endl;
      std::cout<<"Ingrese Dificultad |1=baja / 2=media / 3=alta|"<<std::endl;
      std::cin>>dif;
    }
    std::cout<<"Ingrese Fecha limite"<<std::endl;
    fechaLimite.cargar();
    std::cout<<"Ingrese estado |0=pendiente / 1= hecho|"<<std::endl;
    std::cin>>est;
     while(est<0||est>1)
    {
        std::cout<<"Parametro invalido"<<std::endl;
      std::cout<<"Ingrese estado |0=pendiente / 1= hecho|"<<std::endl;
     std::cin>>est;
    }
    _id=id;
    strcpy(_nombre,nombre);
    _dificultad=dif;
    _estado=est;

}
void Tarea::cargarDefault()
{
    _id=-1;
    strcpy(_nombre,"Default");
    _dificultad=-1;
    _estado=0;
}

