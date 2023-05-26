#include <iostream>
#include <string>
#include "Fecha.h"

void Fecha::cargaDefault()
{
    _dia=14;
    _mes=07;
    _anio=1995;
}
bool Fecha::esBiciesto()
{
    if ((_anio%4==0&&_anio%100!=0)||_anio%400==0)
    {
        return true;
    }
    return false;
}
Fecha::Fecha()
{
    cargaDefault();
}
Fecha::Fecha (int dia, int mes, int anio)
{
    _dia=dia;
    _mes=mes;
    _anio=anio;
    if(dia<=0||mes<=0||anio<=0||mes>12)
    {
        cargaDefault();
    }
    int dias[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    if (esBiciesto())
    {
        dias[1]++;
    }
    if (_dia>dias[_mes-1])
    {
        cargaDefault();
    }
}
std::string Fecha::toString(std::string formatoFecha)
{
    std::string fechaFormateada="";
    std::string DD = std::to_string(_dia);
    std::string MM = std::to_string(_mes);
    std::string YYYY = std::to_string(_anio);

    if (_dia<10)
    {
        DD = "0" + std::to_string(_dia);
    }
    if (_mes<10)
    {
        MM = "0" + std::to_string(_mes);
    }

    if(fechaFormateada =="DD/MM/YYYY")
    {
        fechaFormateada=DD+ "/" +MM +"/"+YYYY;
    }
    else if (formatoFecha=="YYYY/MM/DD")
    {
        fechaFormateada=YYYY+ "/" +MM +"/"+DD;
    }
    else
    {
        fechaFormateada=DD+ "/" +MM +"/"+YYYY;
    }
    return fechaFormateada;
}
int Fecha::getDia()
{
    return _dia;
}
int Fecha::getMes()
{
    return _mes;
}
int Fecha::getAnio()
{
    return _anio;
}
void Fecha::mostrar()
{
    toString("DD/MM/YYYY");
}
void Fecha::setDia(int d)
{
    _dia=d;

}
void Fecha::setMes(int m)
{
    _mes=m;
}
void Fecha::setAnio(int y)
{
    _anio=y;
}
void Fecha::cargar()
{
    int d,m,a;
    std::cout<<"Ingrese dia"<<std::endl;
    std::cin>>d;
    std::cout<<"Ingrese  mes"<<std::endl;
    std::cin>>m;
    std::cout<<"Ingrese anio"<<std::endl;
    std::cin>>a;
    _dia=d;
    _mes=m;
    _anio=a;
    if(d<=0||m<=0||a<=0||m>12)
    {
        cargaDefault();
    }
    int dias[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    if (esBiciesto())
    {
        dias[1]++;
    }
    if (_dia>dias[_mes-1])
    {
        cargaDefault();
    }
}


