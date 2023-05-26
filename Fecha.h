#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <string>
class Fecha

{
private:
    int _dia;
    int _mes;
    int _anio;
public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    bool esBiciesto();
    int getDia();
    int getMes();
    int getAnio();
    void cargaDefault();
    std::string toString(std::string formatoFecha = "DD/MM/YYYY");
    void cargar();
    void mostrar();
    void setDia(int d);
    void setMes(int m);
    void setAnio(int y);
};


#endif // FECHA_H_INCLUDED
