#include <stdio.h>

void main(){

    float numeroFloat1 = 5, numeroFloat2 = 10.33, resultadoFloat;
    int numeroEntero1 = 14, resultadoEntero;

    resultadoFloat = numeroFloat1 / 2;
    printf("Resultado Float --> %f\n", resultadoFloat);

    resultadoFloat = numeroFloat1 / 2.0;
    printf("Resultado Float --> %f\n", resultadoFloat);

    resultadoFloat = numeroEntero1 / 3;
    printf("Resultado Float --> %f\n", resultadoFloat);
    
    resultadoFloat = numeroEntero1 / 3.0;
    printf("Resultado Float --> %f\n", resultadoFloat);

    resultadoFloat = numeroEntero1 * numeroFloat2;
    printf("Resultado float --> %f\n", resultadoFloat);

    resultadoEntero = numeroEntero1 * numeroFloat2;
    printf("resultado entero --> %i\n", resultadoEntero);

    printf("numeroEntero1 * numeroFloat2 --> %f\n", numeroEntero1 * numeroFloat2);

    return 0;
}