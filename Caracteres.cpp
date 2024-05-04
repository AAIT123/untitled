#include "Caracteres.h"
bool Caracteres::OrdenCaractres(char c1, char c2)
{
    return (c1 <= c2);
}
bool Caracteres::CaracterEntreIM(char c1)
{
    return 'i' >= c1 <= 'm' || 'I' >= c1 <= 'M';
}