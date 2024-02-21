#include <stdio.h>

/*Crea un array bidimensional para almacenar el sueldo de 10 empleados del turno de
mañana y 10 empleados del turno de tarde. En la primera fila guarda los del turno de
mañana y en la segunda los del turno de tarde. Iniciailza el array a la vez que lo
declaras. Recorre el array e imprime los sueldos del turno de mañana y los del turno
de tarde. La impresión debe ser algo parecido a esto.*/

void main()
{

    float sueldo[2][10] = 
    {2500.20, 1689.56, 220.00, 1580.15, 2500.12, 1050.16, 1452.23, 4589.25, 958.24, 1100.50,
     5264.12, 1689.56, 220.00, 1580.15, 2500.12, 1050.16, 1452.23, 4589.25, 958.24, 1100.50};

    printf("\nTURNO DE MANANA.");
    for (int j = 0; j < 10; j++)
    {
        printf("\nEMPLEADO %i: %0.2f$", j+1, sueldo[0][j]);
    }   
    
    printf("\n");
    printf("\nTURNO DE TARDE.");
    for (int j = 0; j < 10; j++)
    {
        printf("\nEMPLEADO %i: %0.2f$", j+1, sueldo[1][j]);
    }   
    
}