#include "Listatarea.h"
#include "Funciones.h"


void ListaDetarea::cargarTareas()
{
    for(int x=0; x<4; x++)
    {
        tar[x].cargarTarea();
    }

    ordenarTareas(tar);
}
void ListaDetarea::mostrarTareas()
{
    for(int x=0; x<4; x++)
    {
        tar[x].mostrar();
    }

}
void ListaDetarea::cambiarestado()
{

}

 int ListaDetarea::diasPendientes(int id)
 {
     int d,m,a,suma;
     Fecha hoy;
     hoy=fechaHoy();
     if (tar[id].getFecha().getAnio()>=hoy.getAnio())
     {
         a=hoy.getAnio()-tar[id].getFecha().getAnio();

         if (tar[id].getFecha().getAnio()==hoy.getAnio()&&tar[id].getFecha().getMes()>=hoy.getMes())
         {
             m=hoy.getMes()-tar[id].getFecha().getMes();

             if (tar[id].getFecha().getMes()==hoy.getMes()&&tar[id].getFecha().getDia()>hoy.getDia())
             {
                 d=hoy.getDia()-tar[id].getFecha().getDia();
             }else
             { std::cout<<"La presentacion esta vencida"<<std::endl;}
         }else
         {
             std::cout<<"La presentacion esta vencida"<<std::endl;
         }
     }else {

         std::cout<<"La presentacion esta vencida"<<std::endl;
     }
    suma=d+(m*30)+(a*365);

    return suma;
 }
  void ListaDetarea::mostrarTareaunica(int id)
  {
      tar[id].mostrar();
  }
       void ListaDetarea::modificarTarea(int id)
       {
           bool opc;
           std::cout<<"¿Desea confirmar que la tarea fue realziada?"<<std::endl;
             std::cout<<"|1-si| ---------------------|0-no|"<<std::endl;
             std::cin>>opc;
           if(opc==1)
              {
                  bool est=1;
           tar[id].setEstado(est);
           std::cout<<"El estado de la tarea a sido modificado"<<std::endl;
              }

       }

