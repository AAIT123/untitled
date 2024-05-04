#include "Conversiones.h"
double Conversiones::FahrenheitACelcius(double fah)
{
    return (5.0 / 9.0) * (fah - 32);
}
double Conversiones::KilometrosAMillas(double kms)
{
    return kms / 1.609;
}
double Conversiones::LibrasAKilogramos(double libras)
{
    return libras * 0.453592;
}