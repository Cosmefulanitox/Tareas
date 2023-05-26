#include <iostream>
#include <string>
#include "Fecha.h"
#include "Tarea.h"
#include "Funciones.h"
#include "Listatarea.h"

using namespace std;

int main()
{
    int opc,sel;
ListaDetarea lis;
    do
    {
        cout<<"---------------------"<<endl;
        cout<<"Ingrese opcion"<<endl;
        cout<<"1.Cargar todos"<<endl;
        cout<<"2.Mostrar todos"<<endl;
        cout<<"3.Mostrar seleccion"<<endl;
        cout<<"4.Modificar seleccion"<<endl;
        cout<<"0.Salir"<<endl;
        cout<<"---------------------"<<endl;

     switch(opc)
     {
     case 1:
         lis.cargarTareas();
        break;
        case 2:
             lis.mostrarTareas();
        break;
        case 3:
            cout<<"Ingrese ID de tarea que desea observar"<<endl;
            cin>>sel;
            lis.mostrarTareaunica(sel);
        break;
        case 4:
            cout<<"Ingrese ID de tarea que desea seleccionar como hecha"<<endl;
            cin>>sel;
            lis.modificarTarea(sel);
        break;
        default:
             cout<<"Opcion invalida"<<endl;
            break;

     }

    }
    while(ocp!=0);








    return 0;
}
