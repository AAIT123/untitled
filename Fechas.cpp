#include "Fechas.h"
int Fechas::Anio(int fecha)
{
    return fecha / 10000;
}
int Fechas::Mes(int fecha)
{
    return (fecha % 10000) / 100;
}
int Fechas::Dia(int fecha)
{
    return fecha % 100;
}
bool Fechas::EsBisiesto(int anio)
{
    return (anio <= 1582 || (anio % 4 == 0 && (anio % 100 != 0 || (anio % 100 == 0 && anio % 400 == 0)))) ? true : false;
}