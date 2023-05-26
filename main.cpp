#include <iostream>
#include <string>
#include "Fecha.h"
#include "Tarea.h"
#include "Funciones.h"
#include "Listatarea.h"
#include "TareaArchivos.h"

using namespace std;

int main()
{
    int opc,sel,x,cant,id;
    ListaDetarea lis;
    Tarea t;
    TareaArchivos tar;
    do
    {
        cout<<"---------------------"<<endl;
        cout<<"Ingrese opcion"<<endl;
        cout<<"1.Cargar y guardar tarea"<<endl;
        cout<<"2.Mostrar busqueda prueba"<<endl;
        cout<<"3.Mostrar seleccion"<<endl;
        cout<<"4.Modificar seleccion"<<endl;
        cout<<"5.Cuantos registros hay"<<endl;
        cout<<"0.Salir"<<endl;
        cout<<"---------------------"<<endl;
        cin>>opc;
        switch(opc)
        {
        case 1:

            for (x=0; x<4; x++)
            {
                t.cargarTarea();
                tar.guardarRegistro(t);
            }





            break;

        case 2:

            for(x=0; x<tar.cantidadDeRegistros();x++)
            {
                t=tar.buscarRegistro(x);
                t.mostrar();
            }

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
        case 5:
            cout<<"Cantidad de registros: "<<tar.cantidadDeRegistros()<<endl;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;

        }

    }
    while(opc!=0);








    return 0;
}
