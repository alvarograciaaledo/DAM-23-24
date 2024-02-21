#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Crea un array de 10 números decimales. Asigna un valor a cada posición del array a
la vez que lo declaras. Utiliza la librería math.h para imprimir los valores del array
redondeados al alza.*/

void main()
{
    float numeros[10] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.10};

    printf("\nNUMEROS A LA ALZA Y A LA BAJA.");
    for (int i = 0; i < 10; i++)
    {
        printf("\nALZA NUM %i: %0.2lf", i + 1, ceil(numeros[i]));
        printf("\nBAJA NUM %i: %0.2lf\n", i + 1, floor(numeros[i]));
    }
}