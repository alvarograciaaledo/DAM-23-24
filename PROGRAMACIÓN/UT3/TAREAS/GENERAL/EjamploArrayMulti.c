#include <stdio.h>

void main()
{

    int DATOS[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int fila, columna;

    for (fila = 0; fila < 3; fila++)
    {
        for (columna = 0; columna < 3; columna++)
        {
            printf("ELEMENTO [%d][%d]: %d\n", fila, columna, DATOS[fila][columna]);
        }
    }
    
}