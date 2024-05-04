#ifndef MATE_H
#define MATE_H
class Mate
{
public:
    double PerimetroCirculo(double radio);
    double AreaCirculo(double radio);
    void Operaciones(int num1, int num2, int *suma, int *resta, int *multiplicacion, float *division);
    void ImporteIVA(double precio, double* iva, double* total);
    bool TanX(double co, double ca, double *tan);
    bool CosX(double ca, double h, double *cos);
    int TrianguloTipo(int l1, int l2, int l3);
    double AreaTriangulo(int l1, int l2, int l3);
    bool Multiplo(int num1, int num2);
    int ValorAbsoluto(int num);
    void Factores(int num);
    void Pares100a200(int num);
    double CalcularPi(int num);
    bool Impar(int num);
    int Cifras(int num);
    void Estadisticas(int num, int *mayor,int *menor, int *medio);
    void PromedioHasta0(double *n);
};
#endif /* MATE_H */