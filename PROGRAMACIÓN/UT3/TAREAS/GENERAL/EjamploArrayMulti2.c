#include <stdio.h>
#define TAM 6

void main()
{

    int DATOS[TAM][TAM] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}};

    int fila, columna;

    for (fila = 0; fila < TAM; fila++)
    {
        for (columna = 0; columna < TAM; columna++)
        {
            printf("ELEMENTO [%d][%d]: %d\n", fila, columna, DATOS[fila][columna]);
        }
    }

    printf("\nPARES: ");
    for (fila = 0; fila < TAM; fila++) 
    {
        for (columna = 0; columna < TAM; columna++) {
            if (DATOS[fila][columna] % 2 == 0) 
            {
                printf("ELEMENTO [%d][%d]: %d\n", fila, columna, DATOS[fila][columna]);
            }
        }
    }
}