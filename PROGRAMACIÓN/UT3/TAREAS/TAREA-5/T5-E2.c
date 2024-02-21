#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Crea un array 3x5 de números decimales. Asigna un valor a cada posición del array
a la vez que lo declaras. Utiliza la librería math.h para imprimir los valores del array
redondeados a la baja.*/

void main()
{
    float numeros[3][5] = {1.11, 2.22, 3.33, 4.44, 5.55,
                           6.66, 7.77, 8.88, 9.99, 10.10,
                           11.11, 12.12, 13.13, 14.14, 15.15};

    printf("\nNUMEROS A LA ALZA Y A LA BAJA.");
    for (int i = 0; i < 3; i++)
    {
        printf("\n--- BLOQUE %i ---", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("\nBAJA NUM %i: %0.2lf\n", i + 1, floor(numeros[i][j]));
        }
    }
}