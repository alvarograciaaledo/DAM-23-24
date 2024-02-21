#include <stdio.h>

void main(){

    float resultadoFloat;
    int numeroEntero1;

    numeroEntero1 = (int)19.99 + (int)11.99;
    printf("Numero Entero --> %i\n", numeroEntero1);

    numeroEntero1 = 19.99 + 11.99;
    printf("Numero entero --> %i\n", numeroEntero1);

    printf("Numero PI %i\n", (int)3.14);

    double d, e, f = 2.33;
    int i = 6;
    e = f * i;
    printf("e --> %lf\n", e);
    d = (int)(f * i);
    printf("d --> %lf\n", d);

    float resultado; 
    int resultadoInt;
    resultado = (14 / 3 + 1.1) * 2;
    printf("resultado --> %f\n", resultado);
    resultado = ((float) 14/3 + 1.1) * 2; 
    printf("resultado --> %f\n", resultado);

    resultadoInt = (14/3 + 1.1) * 2; 
    printf("resultadoInt --> %i\n", resultadoInt); 
    resultadoInt = ((float) 14/3 + 1.1) * 2; 
    printf("resultadoInt --> %i\n", resultadoInt);

    return 0;
}