#include "Nutricion.h"
float Nutricion::IMC(float kilogramos, float altura)
{
    return kilogramos/(altura*altura);
}