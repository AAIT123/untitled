#include "Mate.h"
#include <cmath>
#include <stdio.h>
double Mate::PerimetroCirculo(double radio)
{
    return M_PI*2.0*radio;
}
double Mate::AreaCirculo(double radio)
{
    return M_PI*radio*radio;
}
void Mate::Operaciones(int num1, int num2, int* suma, int* resta, int* multiplicacion, float* division)
{
    *suma = num1 + num2;
    *resta = num1 - num2;
    *multiplicacion = num1 * num2;
    *division = num1 / (float)num2;
}
void Mate::ImporteIVA(double precio, double* iva, double* total)
{
    *iva = precio * 0.15;
    *total = precio + *iva;
}
bool Mate::TanX(double co, double ca, double* tan)
{
    if (ca == 0)
        return false;
    *tan = co / ca;
    return true;
}
bool Mate::CosX(double ca, double h, double* cos)
{
    if (h == 0 || ca > h)
        return false;
    *cos = ca / h;
    return true;
}
int Mate::TrianguloTipo(int l1, int l2, int l3)
{
    if(l1<=0||l2<=0||l3<=0||l1>=(l2+l3)||l2>=(l1+l3)||l3>=(l1+l2))
        return 4;
    if(l1==l2&&l2==l3)
        return 1;
    return (l1==l2||l1==l3||l2==l3)? 2 : 3;
}
double Mate::AreaTriangulo(int l1, int l2, int l3)
{
    return sqrt(((l1+l2+l3)/2)*(((l1+l2+l3)/2)-l1)*(((l1+l2+l3)/2)-l2)*(((l1+l2+l3)/2)-l3));
}
bool Mate::Multiplo(int num1, int num2)
{
    if(num2 % num1 == 0)
        return true;
    return false;
}
int Mate::ValorAbsoluto(int num)
{
    return (num<0)?-num:num;
}
void Mate::Factores(int num)
{
    for (int i=1;i<=num;i++)
        if (num%i==0)
            printf("%d ",i);
    printf("\n");
}
void Mate::Pares100a200(int num)
{
    for (;num<=200&&num>=100;num++)
        if (num%2==0)
            printf("%d ",num);
    printf("\n");
}
double Mate::CalcularPi(int num)
{
    fflush(stdout);
    fflush(stdin);
    double pi=4;
    fflush(stdout);
    fflush(stdin);
    for (int i=3;i<=num;i+=4)
    {
        fflush(stdout);
        fflush(stdin);
        pi-=(double)4/(double)i;
        fflush(stdout);
        fflush(stdin);
        pi+=(double)4/(double)(i+2);
        fflush(stdout);
        fflush(stdin);
    }
    fflush(stdout);
    fflush(stdin);
    return pi;
    fflush(stdout);
    fflush(stdin);
}
bool Mate::Impar(int num)
{
    return (num%2==1)?true:false;
}
int Mate::Cifras(int num)
{
    int i=0;
    for(;num>0;num/=10,i++);
    return i;
}
void Mate::Estadisticas(int num, int* mayor, int* menor, int* medio)
{
    int i=0,j;
    for (;i<num;i++)
    {
        printf ("Dame el %d numero:",i+1);
        fflush(stdout);
        scanf("%d",&j);
        if (i==0){
            *mayor=j;*menor=j;*medio=0;}
        if (j>=*mayor)
            *mayor=j;
        if (j<=*menor)
            *menor=j;
        *medio+=j;
    }
    *medio=*medio/i;
}
void Mate::PromedioHasta0(double* n)
{
    int i=0,j;
    for (n=0;j;i++)
    {
        printf ("Dame el %d numero:",i);
        fflush(stdout);
        scanf("%d",&j);
        *n+=j;
    }
    *n/=(i-1);
}