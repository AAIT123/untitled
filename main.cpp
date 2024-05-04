#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Conversiones.h"
#include "Fechas.h"
#include "Mate.h"
#include "Caracteres.h"
#include "Nutricion.h"
int main()
{
    /*Conversiones conv;
    double kilogramos, libras;
    printf("Dame un peso en libras: ");
    fflush(stdout);
    scanf("%lf",&libras);
    kilogramos = conv.LibrasAKilogramos(libras);
    printf("%lf libras equivalen a %lf kilogramos",libras,kilogramos);*/
    /*double kilometros, millas;
    printf("Dame una distancia en kilómetros: ");
    fflush(stdout);
    scanf("%lf",&kilometros);
    Conversiones conv;
    millas = conv.KilometrosAMillas(kilometros);
    printf("%lf kilómetros equivalen a %lf millas",kilometros,millas);*/
    /*int fecha, anio, mes, dia;
    while (true){
    printf("Dame una fecha (AAAAMMDD): ");
    fflush(stdout);
    scanf("%d",&fecha);
    Fechas fec;
    anio = fec.Anio(fecha);
    mes = fec.Mes(fecha);
    dia = fec.Dia(fecha);
    if ((anio>0&anio<=9999)&(mes>0&mes<=12)&(dia>0&dia<=31)) break;
    printf("La fecha %d es incorrecta, intenta otra vez\n\n",fecha);}
    printf("La fecha %d tiene %04d años, %02d meses y %02d días",fecha, anio, mes, dia);*/
    /*double fahrenheit, celcius;
    printf("Dame una temperatura en grados Fahrenheit: ");
    fflush(stdout);
    scanf("%d",&fahrenheit);
    Conversiones conv;
    celcius = conv.FahrenheitACelcius(fahrenheit);
    printf("%lf°F equivalen a %lf°C",fahrenheit,celsius);*/
    /*double radio, perimetro, area;
    printf("Dame el radio de un circulo: ");
    fflush(stdout);
    scanf("%lf",&radio);
    Mate mat;
    perimetro = mat.PerimetroCirculo(radio);
    area = mat.AreaCirculo(radio);
    printf("Un circulo de radio %lf tiene un perimetro de %lf y un area de %lf\n",radio,perimetro,area);*/
    /*int n1, n2, sum, res, mult;
    float div;
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d",&n1);
    printf("Dame otro numero: ");
    fflush(stdout);
    scanf("%d",&n2);
    Mate mat;
    mat.Operaciones(n1,n2,&sum,&res,&mult,&div);
    printf("\nSuma: %d\nResta: %d\nMultiplicacion: %d\nDivision: %lf\n",sum,res,mult,div);*/
    /*double precio, iva, total;
    printf("Dame el precio: ");
    fflush(stdout);
    scanf("%lf",&precio);
    Mate mat;
    mat.ImporteIVA(precio,&iva,&total);
    printf("El iva es %.2lf mas el precio es %.2lf\n",iva,total);*/
    /*double catO, catA, tangente;
    printf("Dame el cateto opuesto: ");
    fflush(stdout);
    scanf("%lf",&catO);
    printf("Dame el cateto adyacente: ");
    fflush(stdout);
    scanf("%lf",&catA);
    Mate mat;
    if(mat.TanX(catO,catA,&tangente))
        printf("El coseno es: %lf",tangente);*/
    /*double catA, catH, coseno;
    printf("Dame el cateto adyacente: ");
    fflush(stdout);
    scanf("%lf",&catA);
    printf("Dame la hipotenusa: ");
    fflush(stdout);
    scanf("%lf",&catH);
    Mate mat;
    if(mat.CosX(catA,catH,&coseno))
        printf("El coseno es: %lf",coseno);*/
    /*int anio;
    printf("Dame un año: ");
    fflush(stdout);
    scanf("%d",&anio);
    Fechas fec;
    if(fec.EsBisiesto(i))
        printf("Es bisiesto");
    else
        printf("No es bisiesto");*/
    /*char car1, car2;
    printf("Dame una letra en mayuscula: ");
    fflush(stdout);
    scanf("%c",&car1);
    printf("Dame otra letra en mayuscula: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&car2);
    Caracteres c;
    if(c.OrdenCaractres(car1,car2))
        printf("Estan en orden");
    else
        printf("No estan en orden");*/
    /*char car1;
    printf("Dame una letra: ");
    fflush(stdout);
    scanf("%c",&car1);
    Caracteres c;
    if(c.CaracterEntreIM(car1))
        printf("Esta dentro del rango\n");
    else
        printf("No esta dentro del rango\n");*/
    /*int lado1,lado2,lado3,tipo;
    printf("Dame el primer lado: ");
    fflush(stdout);
    scanf("%d",&lado1);
    printf("Dame el segundo lado: ");
    fflush(stdout);
    scanf("%d",&lado2);
    printf("Dame el tercer lado: ");
    fflush(stdout);
    scanf("%d",&lado3);
    Mate mat;
    tipo = mat.TrianguloTipo(lado1,lado2,lado3);
    printf("Es un triangulo de tipo %d\n",tipo);
    return 0;*/
    /*int lado1,lado2,lado3;
    printf("Dame el primer lado: ");
    fflush(stdout);
    scanf("%d",&lado1);
    printf("Dame el segundo lado: ");
    fflush(stdout);
    scanf("%d",&lado2);
    printf("Dame el tercer lado: ");
    fflush(stdout);
    scanf("%d",&lado3);
    Mate mat;
    double area = mat.AreaTriangulo(lado1,lado2,lado3);
    if(mat.TrianguloTipo(lado1,lado2,lado3)!=4)
        printf("El area del triangulo es de %lf\n",area);*/
    /*int n1,n2;
    printf("Dame el primer numero: ");
    fflush(stdout);
    scanf("%d",&n1);
    printf("Dame el segundo numero: ");
    fflush(stdout);
    scanf("%d",&n2);
    Mate mat;
    if(mat.Multiplo(n1,n2))
        printf("El %d es multiplo de %d\n",n1,n2);*/
    /*int n1,n2;
    printf("Dame un numero: ");
    fflush(stdout);
    scanf("%d",&n1);
    Mate mat;
    n2 = mat.ValorAbsoluto(n1);
    printf("El valor absoluto de %d es %d\n",n1,n2);*/
    /*float peso, altura, imc;
    printf ("Dame tu peso en kilogramos: ");
    fflush(stdout);
    scanf("%f",&peso);
    printf ("Dame tu altura en metros: ");
    fflush(stdout);
    scanf("%f",&altura);
    Nutricion nut;
    imc = nut.IMC(peso,altura);
    printf("Tu indice de masa corporal es de %f\n",imc);*/
    /*int num;
    printf ("Dame un numero: ");
    fflush(stdout);
    scanf("%d",&num);
    Mate mat;
    printf("Los fatores del numero %d son: ",num);
    mat.Factores(num);*/
    /*int num;
    printf ("Dame un numero entre el 100 y 200: ");
    fflush(stdout);
    scanf("%d",&num);
    Mate mat;
    if (num>=100&&num<=200)
        printf("Los pares del %d al 200 son: ",num);
    mat.Pares100a200(num);*/
    /*fflush(stdout);
    fflush(stdin);
    int num;
    fflush(stdout);
    fflush(stdin);
    printf ("Dame el numero de terminos: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&num);
    fflush(stdout);
    fflush(stdin);
    Mate mat;
    fflush(stdout);
    fflush(stdin);
    double pi = mat.CalcularPi(num);
    fflush(stdout);
    fflush(stdin);
    printf("%lf\n",pi);
    fflush(stdout);
    fflush(stdin);*/
    /*for (int i=1,num;i<=10;i++)
    {
        printf ("Dame el %d numero: ",i);
        fflush(stdout);
        scanf("%d",&num);
        Mate mat;
        if(mat.Impar(num))
            printf ("El %d es impar\n",num);
        else
            printf ("El %d es par\n",num);
    }*/
    /*int num;
    printf ("Dame un numero: ",);
    fflush(stdout);
    scanf("%d",&num);
    Mate mat;
    int cifras = mat.Cifras(num);
    printf ("El numero %d tiene %d cifras",num,cifras);*/
    int num,mayor,menor,medio;
    printf ("Dame un numero: ");
    fflush(stdout);
    scanf("%d",&num);
    Mate mat;
    mat.Estadisticas(num,&mayor,&menor,&medio);
    printf("Mayor:%d\nMenor:%d\nMedio:%d\n",mayor,menor,medio);
    /*double n;
    Mate mat;
    mat.PromedioHasta0(&n);
    printf("El promedio es: %lf\n",n);*/
    return 0;
}